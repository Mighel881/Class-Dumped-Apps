//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TTFileUploadiOSDNSCache;

@interface _TTFileUploadiOSDNSParser : NSObject
{
    NSMutableDictionary *_parsers;
    NSMutableDictionary *_sameParsers;
    TTFileUploadiOSDNSCache *_cache;
    unsigned long long _networkState;
}

+ (id)shareInstance;
@property(nonatomic) unsigned long long networkState; // @synthesize networkState=_networkState;
@property(retain, nonatomic) TTFileUploadiOSDNSCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSMutableDictionary *sameParsers; // @synthesize sameParsers=_sameParsers;
@property(retain, nonatomic) NSMutableDictionary *parsers; // @synthesize parsers=_parsers;
- (void).cxx_destruct;
- (long long)_backupParserType:(long long)arg1;
- (void)_networkDidChangeEvent:(id)arg1;
- (void)_removeParser:(id)arg1;
- (void)_addParser:(id)arg1;
- (id)_sameHostParsering:(id)arg1;
- (id)_clearSameParsers:(id)arg1;
- (void)_saveSameParser:(id)arg1;
- (void)_startParese:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)getItemInfoWithHost:(id)arg1 parserType:(long long)arg2 backupParseType:(long long)arg3 result:(CDUnknownBlockType)arg4;
- (id)getIpWithHost:(id)arg1 parserType:(long long)arg2 backupParseType:(long long)arg3 result:(CDUnknownBlockType)arg4;
- (id)init;
- (void)dealloc;

@end
