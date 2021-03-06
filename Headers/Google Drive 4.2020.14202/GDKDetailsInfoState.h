//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDKDetailsInfoLocationState, NSString, UIImage;

@interface GDKDetailsInfoState : NSObject
{
    _Bool _resolvableShortcut_18;
    _Bool _isLoading_9;
    NSString *_kindString_10;
    NSString *_sizeString_10;
    NSString *_storageString_13;
    NSString *_storageDescriptionString_24;
    NSString *_ownerString_11;
    NSString *_createdString_13;
    NSString *_modifiedString_14;
    GDKDetailsInfoLocationState *_locationState_13;
    GDKDetailsInfoLocationState *_shortcutLocationState_21;
    NSString *_targetTitle_11;
    UIImage *_targetFileIconImage_19;
    NSString *_targetSectionHeaderTitle_24;
}

@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading_9;
@property(readonly, nonatomic) _Bool resolvableShortcut; // @synthesize resolvableShortcut=_resolvableShortcut_18;
@property(readonly, copy, nonatomic) NSString *targetSectionHeaderTitle; // @synthesize targetSectionHeaderTitle=_targetSectionHeaderTitle_24;
@property(readonly, nonatomic) UIImage *targetFileIconImage; // @synthesize targetFileIconImage=_targetFileIconImage_19;
@property(readonly, copy, nonatomic) NSString *targetTitle; // @synthesize targetTitle=_targetTitle_11;
@property(readonly, nonatomic) GDKDetailsInfoLocationState *shortcutLocationState; // @synthesize shortcutLocationState=_shortcutLocationState_21;
@property(readonly, nonatomic) GDKDetailsInfoLocationState *locationState; // @synthesize locationState=_locationState_13;
@property(readonly, copy, nonatomic) NSString *modifiedString; // @synthesize modifiedString=_modifiedString_14;
@property(readonly, copy, nonatomic) NSString *createdString; // @synthesize createdString=_createdString_13;
@property(readonly, copy, nonatomic) NSString *ownerString; // @synthesize ownerString=_ownerString_11;
@property(readonly, copy, nonatomic) NSString *storageDescriptionString; // @synthesize storageDescriptionString=_storageDescriptionString_24;
@property(readonly, copy, nonatomic) NSString *storageString; // @synthesize storageString=_storageString_13;
@property(readonly, copy, nonatomic) NSString *sizeString; // @synthesize sizeString=_sizeString_10;
@property(readonly, copy, nonatomic) NSString *kindString; // @synthesize kindString=_kindString_10;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithKindString:(id)arg1 sizeString:(id)arg2 storageString:(id)arg3 storageDescriptionString:(id)arg4 ownerString:(id)arg5 createdString:(id)arg6 modifiedString:(id)arg7 locationState:(id)arg8 shortcutLocationState:(id)arg9 targetTitle:(id)arg10 targetFileIconImage:(id)arg11 targetSectionHeaderTitle:(id)arg12 resolvableShortcut:(_Bool)arg13 isLoading:(_Bool)arg14;

@end

