//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BDSPlacementFillStrategy, NSArray, NSDictionary, NSString;

@interface BDSAdBoard : NSObject
{
    NSString *_id;
    NSArray *_placements;
    BDSPlacementFillStrategy *_fillStrategy;
    NSDictionary *_logExtra;
}

@property(copy, nonatomic) NSDictionary *logExtra; // @synthesize logExtra=_logExtra;
@property(retain, nonatomic) BDSPlacementFillStrategy *fillStrategy; // @synthesize fillStrategy=_fillStrategy;
@property(copy, nonatomic) NSArray *placements; // @synthesize placements=_placements;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;
- (_Bool)exsitLocalProvider;
- (id)initWithDictionary:(id)arg1;

@end

