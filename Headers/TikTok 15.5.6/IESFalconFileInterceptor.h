//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESFalconCustomInterceptor-Protocol.h"

@class NSMutableDictionary, NSString;

@interface IESFalconFileInterceptor : NSObject <IESFalconCustomInterceptor>
{
    NSMutableDictionary *_fileSearchPathPatternDictionary;
}

@property(retain, nonatomic) NSMutableDictionary *fileSearchPathPatternDictionary; // @synthesize fileSearchPathPatternDictionary=_fileSearchPathPatternDictionary;
- (void).cxx_destruct;
- (id)_customPathsWithURLString:(id)arg1 ignorePrefix:(id)arg2 searchPath:(id)arg3;
- (id)_customPathsWithURLString:(id)arg1;
- (id)falconMetaDataForURLRequest:(id)arg1;
- (void)unregisterPatterns:(id)arg1;
- (void)registerPatterns:(id)arg1 forSearchPath:(id)arg2;
- (void)registerPattern:(id)arg1 forSearchPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
