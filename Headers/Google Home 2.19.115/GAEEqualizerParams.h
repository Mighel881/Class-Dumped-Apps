//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface GAEEqualizerParams : NSObject
{
    NSNumber *_frequency;
    NSNumber *_quality;
    NSNumber *_gainDB;
}

@property(retain, nonatomic) NSNumber *gainDB; // @synthesize gainDB=_gainDB;
@property(retain, nonatomic) NSNumber *quality; // @synthesize quality=_quality;
@property(retain, nonatomic) NSNumber *frequency; // @synthesize frequency=_frequency;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithJSONObject:(id)arg1;

@end

