//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBQuadrilateral;

@interface DBTimedQuadrilateral : NSObject
{
    DBQuadrilateral *_quadrilateral;
    double _timestamp;
}

@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) DBQuadrilateral *quadrilateral; // @synthesize quadrilateral=_quadrilateral;
- (void).cxx_destruct;
- (id)initWithQuadrilateral:(id)arg1 andTimestamp:(double)arg2;

@end

