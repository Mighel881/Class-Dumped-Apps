//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIBezierPath, UIColor;

@interface DBPrettySignature : NSObject
{
    UIBezierPath *_pathForCurves;
    UIBezierPath *_pathForDots;
    NSArray *_curves;
    NSArray *_dots;
    UIColor *_strokeColor;
}

+ (void)addSignatureToUserDefaults:(id)arg1;
+ (id)signaturesFromUserDefaults;
+ (void)writeSignaturesToUserDefaults:(id)arg1;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(readonly, nonatomic) NSArray *dots; // @synthesize dots=_dots;
@property(readonly, nonatomic) NSArray *curves; // @synthesize curves=_curves;
- (void).cxx_destruct;
- (struct CGRect)db_bounds;
- (id)imageWithSize:(struct CGSize)arg1;
- (id)db_pathForDots;
- (id)db_pathForCurves;
- (id)initWithCurves:(id)arg1 dots:(id)arg2 strokeColor:(id)arg3;

@end

