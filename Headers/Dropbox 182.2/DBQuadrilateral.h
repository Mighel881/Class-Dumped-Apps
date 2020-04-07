//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBQuadrilateral : NSObject
{
    struct CGPoint _topLeft;
    struct CGPoint _topRight;
    struct CGPoint _bottomRight;
    struct CGPoint _bottomLeft;
}

+ (_Bool)db_isWithinUnitQuad:(struct CGPoint)arg1 scaleFactor:(double)arg2;
+ (_Bool)db_isInsideUnitSquarePoint:(struct CGPoint)arg1;
+ (double)db_determinantForPoint1:(struct CGPoint)arg1 point2:(struct CGPoint)arg2 point3:(struct CGPoint)arg3;
+ (id)unitQuadrilateral;
@property(nonatomic) struct CGPoint bottomLeft; // @synthesize bottomLeft=_bottomLeft;
@property(nonatomic) struct CGPoint bottomRight; // @synthesize bottomRight=_bottomRight;
@property(nonatomic) struct CGPoint topRight; // @synthesize topRight=_topRight;
@property(nonatomic) struct CGPoint topLeft; // @synthesize topLeft=_topLeft;
- (id)convertToDBShimRectifiedFrame;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isWithinUnitQuadWithScaleFactor:(double)arg1;
- (_Bool)isUnitQuad;
- (_Bool)isInsideUnitQuad;
- (id)quadWithAppliedTransform:(struct CGAffineTransform)arg1;
- (id)description;
- (_Bool)isConvexQuadrilateral;
- (id)initWithTopLeft:(struct CGPoint)arg1 topRight:(struct CGPoint)arg2 bottomRight:(struct CGPoint)arg3 bottomLeft:(struct CGPoint)arg4;

@end
