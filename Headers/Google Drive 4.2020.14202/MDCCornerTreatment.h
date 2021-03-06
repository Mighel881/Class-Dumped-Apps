//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <drive_extension_framework/NSCopying-Protocol.h>

@interface MDCCornerTreatment : NSObject <NSCopying>
{
    long long _valueType;
}

+ (id)cornerWithCurve:(struct CGSize)arg1 valueType:(long long)arg2;
+ (id)cornerWithCurve:(struct CGSize)arg1;
+ (id)cornerWithCut:(double)arg1 valueType:(long long)arg2;
+ (id)cornerWithCut:(double)arg1;
+ (id)cornerWithRadius:(double)arg1 valueType:(long long)arg2;
+ (id)cornerWithRadius:(double)arg1;
@property(nonatomic) long long valueType; // @synthesize valueType=_valueType;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)pathGeneratorForCornerWithAngle:(double)arg1 forViewSize:(struct CGSize)arg2;
- (id)pathGeneratorForCornerWithAngle:(double)arg1;
- (id)init;

@end

