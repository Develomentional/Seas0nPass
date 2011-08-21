/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSingleton.h"

@class NSMutableDictionary, NSLock;

@interface BRFeatureManager : BRSingleton {
@private
	NSMutableDictionary *_featureDatabase;	// 4 = 0x4
	NSMutableDictionary *_featureCodeLookupTable;	// 8 = 0x8
	NSLock *_featureLock;	// 12 = 0xc
}
+ (void)setSingleton:(id)singleton;	// 0x315921cd
+ (id)singleton;	// 0x315920ed
- (id)init;	// 0x315920f9
- (void)_buildFeatureCodeLookupTable;	// 0x31629135
- (id)_featureNameForCode:(id)code;	// 0x31629639
- (void)_loadSavedCodes;	// 0x31629465
- (void)_saveFeatureCodes;	// 0x31629269
- (id)availableFeatures;	// 0x3162973d
- (void)dealloc;	// 0x316299b5
- (void)disableFeatureNamed:(id)named;	// 0x3162984d
- (void)enableFeatureNamed:(id)named;	// 0x315921d9
- (BOOL)isFeatureEnabled:(id)enabled;	// 0x315985c5
- (void)resetFeatures;	// 0x316296a1
- (void)toggleSettingForCode:(id)code;	// 0x31629a21
@end
