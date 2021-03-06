//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEContentLanguageManagerProtocol-Protocol.h"
#import "AWEIMSettingModelUpdateMessage-Protocol.h"
#import "AWEUserMessage-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface AWEContentLanguageManager : NSObject <AWEUserMessage, AWEIMSettingModelUpdateMessage, AWEContentLanguageManagerProtocol>
{
    _Bool _isFetching;
    NSArray *_supportedLanguage;
    NSArray *_currentLanguage;
    NSArray *_remainingLanguage;
    NSDictionary *_supportedLanguageDisplayDictionary;
    NSString *_currentLanguageString;
}

+ (void)prefetchUnloginContentLanguages;
+ (id)contentLanguageStringForUnloginState;
+ (id)decompositedLanguageCodeForUnloginState;
+ (void)saveLanguagesForUnloginState:(id)arg1;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *currentLanguageString; // @synthesize currentLanguageString=_currentLanguageString;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(retain, nonatomic) NSDictionary *supportedLanguageDisplayDictionary; // @synthesize supportedLanguageDisplayDictionary=_supportedLanguageDisplayDictionary;
@property(retain, nonatomic) NSArray *remainingLanguage; // @synthesize remainingLanguage=_remainingLanguage;
@property(retain, nonatomic) NSArray *currentLanguage; // @synthesize currentLanguage=_currentLanguage;
@property(retain, nonatomic) NSArray *supportedLanguage; // @synthesize supportedLanguage=_supportedLanguage;
- (void).cxx_destruct;
- (void)removeLanguageForUnloginState:(id)arg1;
- (void)addLanguageForUnloginState:(id)arg1;
- (void)p_AddOrRemoveActionWithLanguageForUnlogin:(id)arg1 isAdd:(_Bool)arg2;
- (void)updateCurrentLanguageString;
- (void)p_AddOrRemoveActionWithLanguage:(id)arg1 isAdd:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)calculateRemainingLanguage;
- (id)displayContentName:(id)arg1;
- (void)removeLanguage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)addLanguage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)fetchData;
- (void)didUpdateIMSetting:(_Bool)arg1 currentModel:(id)arg2;
- (void)didFinishLogout;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

