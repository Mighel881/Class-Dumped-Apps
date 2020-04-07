//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BulletParamType : NSObject
{
    NSMutableDictionary *_parserDictionary;
    NSMutableDictionary *_builderDictionary;
}

@property(retain, nonatomic) NSMutableDictionary *builderDictionary; // @synthesize builderDictionary=_builderDictionary;
@property(retain, nonatomic) NSMutableDictionary *parserDictionary; // @synthesize parserDictionary=_parserDictionary;
- (void).cxx_destruct;
- (CDUnknownBlockType)getBuilderForOutputType:(Class)arg1;
- (void)registerBuilder:(CDUnknownBlockType)arg1 forOutputType:(Class)arg2;
- (CDUnknownBlockType)getParserForInputType:(Class)arg1;
- (void)registerParser:(CDUnknownBlockType)arg1 forInputType:(Class)arg2;
- (id)init;

@end
