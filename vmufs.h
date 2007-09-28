/** BCD timestamp, used several places below */
typedef struct vmu_timestamp {
	uint8	cent;
	uint8	year;
	uint8	month;
	uint8	day;
	uint8	hour;
	uint8	min;
	uint8	sec;
	uint8	dow;	/* Day of week (0 = monday, etc) */
} vmu_timestamp_t;

/** Root block layout */
typedef struct vmu_root {
	uint8		magic[16];	/*< All should contain 0x55 */
	uint8		use_custom;	/*< 0 = standard, 1 = custom */
	uint8		custom_color[4];	/*< blue, green, red, alpha */
	uint8		pad1[27];	/*< All zeros */
	vmu_timestamp_t	timestamp	;	/*< BCD timestamp */
	uint8		pad2[8];	/*< All zeros */
	uint8		unk1[6];	/*< ??? */
	uint16		fat_loc;	/*< FAT location */
	uint16		fat_size;	/*< FAT size in blocks */
	uint16		dir_loc;	/*< Directory location */
	uint16		dir_size;	/*< Directory size in blocks */
	uint16		icon_shape;	/*< Icon shape for this VMS */
	uint16		blk_cnt;	/*< Number of user blocks */
	uint8		unk2[430];	/*< ??? */
} vmu_root_t;

/** Directory entries, 32 bytes each */
typedef struct vmu_dir {
	uint8		filetype;	/*< 0x00 = no file; 0x33 = data; 0xcc = a game */
	uint8		copyprotect;	/*< 0x00 = copyable; 0xff = copy protected */
	uint16		firstblk;	/*< Location of the first block in the file */
	char		filename[12];	/*< Note: there is no null terminator */
	vmu_timestamp_t	timestamp;	/*< File time */
	uint16		filesize;	/*< Size of the file in blocks */
	uint16		hdroff;	/*< Offset of header, in blocks from start of file */
	uint8		dirty;	/*< See header notes */
	uint8		pad1[3];	/*< All zeros */
} vmu_dir_t;

typedef struct vmi_hdr {
	char	checksum[4];
	char	description[32];
	char	copyright[32];
	vmu_timestamp_t timestamp;
	uint16	version;
	uint16	filenumber;
	char	resource_name[8];
	char	filename[12];
	uint16	filemode;
	uint16	padding;
	uint32	filesize;
} vmi_hdr_t;
