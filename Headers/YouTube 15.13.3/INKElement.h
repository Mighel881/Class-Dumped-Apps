//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class INKStroke, INKTextAttributes;

@interface INKElement : NSObject
{
    INKStroke *_stroke;
    INKTextAttributes *_text;
}

@property(readonly, copy, nonatomic) INKTextAttributes *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) INKStroke *stroke; // @synthesize stroke=_stroke;
- (void).cxx_destruct;
- (id)initWithText:(id)arg1;
- (id)initWithStroke:(id)arg1;

@end

