//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PDFCRectDescriptor : NSObject
{
    struct _NSRange _range;
    struct CGRect _rect;
}

+ (id)RectDescriptorWithRect:(struct CGRect)arg1 range:(struct _NSRange)arg2;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (id)description;
- (id)initWithRect:(struct CGRect)arg1 range:(struct _NSRange)arg2;

@end
