//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKit/PSPDFPropertyMapReader-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString, PSPDFAction, UIColor;

@protocol PSPDFPropertyMapAccessor <PSPDFPropertyMapReader>
- (void)setJSONDictionary:(NSDictionary *)arg1 forKey:(long long)arg2;
- (void)setAdditionalActions:(NSDictionary *)arg1 forKey:(long long)arg2;
- (void)setAction:(PSPDFAction *)arg1 forKey:(long long)arg2;
- (void)setIntegerArray:(NSArray *)arg1 forKey:(long long)arg2;
- (void)setPointArray:(NSArray *)arg1 forKey:(long long)arg2;
- (void)setDrawingPointArray:(NSArray *)arg1 forKey:(long long)arg2;
- (void)setQuadrilateralArray:(NSArray *)arg1 forKey:(long long)arg2;
- (void)setString:(NSString *)arg1 forKey:(long long)arg2;
- (void)setDate:(NSDate *)arg1 forKey:(long long)arg2;
- (void)setEdgeInsets:(struct UIEdgeInsets)arg1 forKey:(long long)arg2;
- (void)setSize:(struct CGSize)arg1 forKey:(long long)arg2;
- (void)setPoint:(struct CGPoint)arg1 forKey:(long long)arg2;
- (void)setColor:(UIColor *)arg1 forKey:(long long)arg2;
- (void)setRect:(struct CGRect)arg1 forKey:(long long)arg2;
- (void)setFloat:(double)arg1 forKey:(long long)arg2;
- (void)setUnsignedInteger:(unsigned long long)arg1 forKey:(long long)arg2;
- (void)setRotation:(long long)arg1 forKey:(long long)arg2;
- (void)setInteger:(long long)arg1 forKey:(long long)arg2;
- (void)setBool:(_Bool)arg1 forKey:(long long)arg2;
@end
