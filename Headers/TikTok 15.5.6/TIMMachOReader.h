//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TIMMachOReader : NSObject
{
    NSMutableDictionary *_dict;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *dict; // @synthesize dict=_dict;
- (void).cxx_destruct;
- (id)functionsForType:(id)arg1;
- (id)functionForKey:(id)arg1;
- (id)stringsForType:(id)arg1;
- (id)stringForKey:(id)arg1;
- (void)lazilyInitialize;
- (id)parseValue:(const void *)arg1 withType:(unsigned long long)arg2;
- (_Bool)readSection:(char *)arg1 inSegment:(char *)arg2 withImageInfo:(struct dl_info)arg3 dataHandler:(CDUnknownBlockType)arg4;
- (id)objectForKey:(id)arg1;

@end
