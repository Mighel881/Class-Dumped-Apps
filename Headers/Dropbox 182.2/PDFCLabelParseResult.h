//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDFCLabelParseResult : NSObject
{
    int _pageIndex;
    NSString *_label;
}

+ (id)LabelParseResultWithPageIndex:(int)arg1 label:(id)arg2;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) int pageIndex; // @synthesize pageIndex=_pageIndex;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPageIndex:(int)arg1 label:(id)arg2;

@end

