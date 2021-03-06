//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "AWEAppAwemeSettingMessage-Protocol.h"
#import "AWEStudioSuperEntranceConfigManager-Protocol.h"

@class NSString, YYCache;

@interface AWEStudioSuperEntranceConfigManager : HTSService <AWEStudioSuperEntranceConfigManager, AWEAppAwemeSettingMessage>
{
    YYCache *_yyCache;
}

+ (id)yyCache;
+ (id)configModel;
+ (id)sharedManager;
@property(retain, nonatomic) YYCache *yyCache; // @synthesize yyCache=_yyCache;
- (void).cxx_destruct;
- (void)awemeSettingDidChange;
- (id)configModel;
- (id)cachedConfigModel;
- (void)cacheConfigModel:(id)arg1;
- (id)initPrivate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

