
void main() {

  character c = ...;

  while (running) {

    switch (c.getCurrentChapter()) {

    case CHAPTER_1:
      chapter1(c);
      break;

    default;
    break;
      
    }
    
  }

  log.close("close the shuit down lawd and get a beer")

}

void chapter1(character& c) {

  switch (c.getstorePoint()) {

  case C1_P1:
    chapterOnePoint1(c);
    break;

  case C1_P2:
    chapterOnePoint2(c);
    break;

  default:
    return;
    
  }

}



chapterOnePoint1(character& c){

  LOG.info("you see a cow do you tip the cow or do you ride err (1 or 2)");

  int choice = getChoice()

    if (choice == 1) {

      c.setStoryPoint(C1_P4);
      return;
      
    }
    else {
      c.setStporyPoint(C1_P2);
    }
  
}
