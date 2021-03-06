/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRPhotoMediaCollection.h"

@class BRMediaCollectionType, NSArray;

@interface BRStreamingPhotoCollection : BRPhotoMediaCollection {
@private
	ATVMediaCollectionRef _collection;	// 44 = 0x2c
	ATVDataClientRef _dataClient;	// 48 = 0x30
	NSArray *_assets;	// 52 = 0x34
	BRMediaCollectionType *_type;	// 56 = 0x38
	BOOL _useForScreenSaver;	// 60 = 0x3c
}
@property(readonly, assign) ATVDataClientRef dataClient;	// G=0x31685ce1; converted property
@property(assign) BOOL useForScreenSaver;	// G=0x31685d01; S=0x31685cf1; converted property
+ (id)collectionWithATVMediaCollection:(ATVMediaCollectionRef)atvmediaCollection dataClient:(ATVDataClientRef)client;	// 0x31685fed
- (id)initWithATVMediaCollection:(ATVMediaCollectionRef)atvmediaCollection dataClient:(ATVDataClientRef)client;	// 0x31685d11
- (id)collectionID;	// 0x316863d1
- (id)collectionName;	// 0x31685dad
- (id)collectionType;	// 0x3168611d
// converted property getter: - (ATVDataClientRef)dataClient;	// 0x31685ce1
- (void)dealloc;	// 0x31686025
- (id)description;	// 0x31685e0d
- (id)imageProxy;	// 0x31685dc1
- (BOOL)isLibrary;	// 0x31686091
- (BOOL)isLocal;	// 0x31685cdd
- (id)keyAssetID;	// 0x316860e9
- (id)mediaAssets;	// 0x3168629d
- (id)mediaTypes;	// 0x31685d6d
// converted property setter: - (void)setUseForScreenSaver:(BOOL)screenSaver;	// 0x31685cf1
- (id)title;	// 0x31686269
// converted property getter: - (BOOL)useForScreenSaver;	// 0x31685d01
@end

