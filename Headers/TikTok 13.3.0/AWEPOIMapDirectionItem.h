//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface AWEPOIMapDirectionItem : NSObject
{
    _Bool _valid;
    NSString *_eta;
    NSMutableArray *_overlayList;
}

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) NSMutableArray *overlayList; // @synthesize overlayList=_overlayList;
@property(copy, nonatomic) NSString *eta; // @synthesize eta=_eta;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *overlays;
- (void)addOverlay:(id)arg1;
- (id)init;

@end
