//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSValue.h>

@interface NSValue (JNWAdditions)
+ (id)jnw_valueWithAffineTransform:(struct CGAffineTransform)arg1;
+ (id)jnw_valueWithSize:(struct CGSize)arg1;
+ (id)jnw_valueWithPoint:(struct CGPoint)arg1;
+ (id)jnw_valueWithRect:(struct CGRect)arg1;
- (long long)jnw_type;
- (struct CGAffineTransform)jnw_affineTransformValue;
- (struct CGPoint)jnw_pointValue;
- (struct CGSize)jnw_sizeValue;
- (struct CGRect)jnw_rectValue;
@end
