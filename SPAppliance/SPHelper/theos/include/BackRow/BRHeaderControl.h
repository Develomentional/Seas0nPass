/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRTextControl;

@interface BRHeaderControl : BRControl {
@private
	BRTextControl *_title;	// 40 = 0x28
	BRTextControl *_subtitle;	// 44 = 0x2c
	BRImageControl *_icon;	// 48 = 0x30
	float _iconHorizontalOffset;	// 52 = 0x34
	float _iconKerningFactor;	// 56 = 0x38
	float _iconScaleFactor;	// 60 = 0x3c
	float _iconEdgeSpace;	// 64 = 0x40
	int _iconPosition;	// 68 = 0x44
	BOOL _titleHidesIcon;	// 72 = 0x48
}
@property(readonly, retain) BRImageControl *icon;	// G=0x315ba0a9; converted property
@property(assign) float iconEdgeSpace;	// G=0x315eaf05; S=0x315eaf59; converted property
@property(assign) float iconHorizontalOffset;	// G=0x315ba079; S=0x315eafed; converted property
@property(assign) float iconKerningFactor;	// G=0x315ba049; S=0x315eafc9; converted property
@property(assign) int iconPosition;	// G=0x315eaef5; S=0x315eafa1; converted property
@property(assign) float iconScaleFactor;	// G=0x315eaee5; S=0x315bce19; converted property
@property(retain) BRTextControl *subtitle;	// G=0x315eb075; S=0x315eb0a5; converted property
@property(retain) BRTextControl *title;	// G=0x315eb17d; S=0x315a4b91; converted property
@property(assign, nonatomic) BOOL titleHidesIcon;	// G=0x315eaf15; S=0x315eaf25; @synthesize=_titleHidesIcon
- (id)init;	// 0x315a4a89
- (void)dealloc;	// 0x315a6299
// converted property getter: - (id)icon;	// 0x315ba0a9
// converted property getter: - (float)iconEdgeSpace;	// 0x315eaf05
- (CGRect)iconFrame;	// 0x315eb2cd
// converted property getter: - (float)iconHorizontalOffset;	// 0x315ba079
// converted property getter: - (float)iconKerningFactor;	// 0x315ba049
// converted property getter: - (int)iconPosition;	// 0x315eaef5
// converted property getter: - (float)iconScaleFactor;	// 0x315eaee5
- (void)layoutSubcontrols;	// 0x315eb2f1
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x315ba0f9
- (void)setIcon:(id)icon position:(int)position edgeSpace:(float)space;	// 0x315eb011
// converted property setter: - (void)setIconEdgeSpace:(float)space;	// 0x315eaf59
- (void)setIconHidden:(BOOL)hidden;	// 0x315eaf35
// converted property setter: - (void)setIconHorizontalOffset:(float)offset;	// 0x315eafed
// converted property setter: - (void)setIconKerningFactor:(float)factor;	// 0x315eafc9
// converted property setter: - (void)setIconPosition:(int)position;	// 0x315eafa1
// converted property setter: - (void)setIconScaleFactor:(float)factor;	// 0x315bce19
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x315eb0a5
- (void)setSubtitle:(id)subtitle withAttributes:(id)attributes;	// 0x315eb0bd
// converted property setter: - (void)setTitle:(id)title;	// 0x315a4b91
- (void)setTitle:(id)title withAttributes:(id)attributes;	// 0x315a4ba9
// declared property setter: - (void)setTitleHidesIcon:(BOOL)icon;	// 0x315eaf25
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x315eb1ad
// converted property getter: - (id)subtitle;	// 0x315eb075
// converted property getter: - (id)title;	// 0x315eb17d
// declared property getter: - (BOOL)titleHidesIcon;	// 0x315eaf15
@end

