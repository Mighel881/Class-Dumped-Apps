//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveTemplateProvider-Protocol.h"

@class HTSLiveTemplateParser, NSString;
@protocol HTSKVStore, HTSKVStoreProvider, IESLiveMonitor;

@interface HTSLiveTemplateEngine : NSObject <HTSLiveTemplateProvider>
{
    id <HTSKVStore> _kvStore;
    NSString *_locale;
    id <HTSKVStoreProvider> _kvStoreProvider;
    HTSLiveTemplateParser *_templateParser;
    id <IESLiveMonitor> _monitor;
}

@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) HTSLiveTemplateParser *templateParser; // @synthesize templateParser=_templateParser;
@property(retain, nonatomic) id <HTSKVStoreProvider> kvStoreProvider; // @synthesize kvStoreProvider=_kvStoreProvider;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) id <HTSKVStore> kvStore; // @synthesize kvStore=_kvStore;
- (void).cxx_destruct;
- (id)parsePiecesFromDisplayText:(id)arg1 isRTLString:(_Bool *)arg2 configuration:(id)arg3;
- (id)parseDisplayText:(id)arg1 isRTLString:(_Bool *)arg2 configuration:(id)arg3;
- (id)parseDisplayText:(id)arg1;
- (id)parseDisplayText:(id)arg1 isRTLString:(_Bool *)arg2;
- (id)parseDisplayText:(id)arg1 configuration:(id)arg2;
- (id)templateForKey:(id)arg1;
- (long long)localVerion;
- (void)savePackage:(id)arg1 version:(long long)arg2;
- (void)updateTemplate;
- (id)initWithLocale:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
