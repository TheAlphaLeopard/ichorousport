// gml_GlobalScript_InputOpposingPressed @ 0x14033f9d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 **
gml_GlobalScript_InputOpposingPressed
          (longlong *param_1,undefined8 param_2,undefined1 **param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 **ppuVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  uint local_res20;
  undefined4 uVar16;
  undefined8 uVar13;
  undefined8 **ppuVar14;
  ulonglong uVar15;
  undefined8 **ppuVar17;
  ulonglong uVar18;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined1 *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1a8;
  byte local_19c;
  undefined8 local_198;
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined8 local_178;
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined1 *local_118;
  undefined8 *local_110;
  undefined1 *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_f0;
  undefined4 local_e4;
  longlong local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  uint local_a0 [2];
  undefined8 *local_98;
  undefined1 local_90 [16];
  longlong local_80;
  
  local_res20 = 0;
  local_1c0 = "gml_Script_InputOpposing";
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  local_1b8 = 0xc;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_a0,param_4,4,param_5);
  uVar16 = 1;
  _eh_vector_constructor_iterator_(&local_1a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  local_res18 = 0;
  local_c4 = 0;
  local_d0 = 0;
  local_f4 = 0;
  local_100 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = (undefined1 *)0x0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde470) &&
     (_Init_thread_header(&DAT_141dde470), DAT_141dde470 == -1)) {
    DAT_141dde468 = (longlong *)FUN_140e63aa0(DAT_1419f2168);
    _Init_thread_footer(&DAT_141dde470);
  }
  local_1b8 = 0xc;
  puVar12 = &DAT_1419df7b0;
  uVar11 = (ulonglong)local_a0[0];
  if ((int)local_a0[0] < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_98[2];
  }
  iVar4 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_1b8 = 0xc;
    if ((int)local_a0[0] < 3) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_98[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
  }
  if ((int)local_a0[0] < 4) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_98[3];
  }
  iVar4 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    uStack_1ec = 0xd;
    local_1f8 = (undefined1 *)0x3ff0000000000000;
    if ((int)local_a0[0] < 4) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_98[3];
      if (&local_1f8 == puVar6) goto LAB_14033fc3f;
    }
    local_1d8 = (undefined1 *)0x3ff0000000000000;
    uStack_1d0 = uStack_1f0;
    uStack_1cc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_1d8);
  }
LAB_14033fc3f:
  if (DAT_141ddc105 == '\0') {
    FUN_140e64380(DAT_141dde468,"gml_Script_InputOpposing");
    FUN_140e64380(local_res8,"gml_Script_InputOpposing");
  }
  local_1b8 = 0xe;
  if (DAT_141ddc105 == '\0') {
    DAT_141ddc105 = '\x01';
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde468 + 0x10))(DAT_141dde468,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde468);
    uVar16 = 0;
    puVar7 = (undefined8 *)gml_Script___InputTrace(local_res8,local_res10,&local_1e8,0,0);
    if (puVar7 != puVar6) {
      local_1f8 = (undefined1 *)*puVar7;
      uStack_1f0 = *(undefined4 *)(puVar7 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_1f8);
    }
    FUN_140e60910(1);
  }
  local_1b8 = 4;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  if ((int)local_a0[0] < 3) {
    puVar6 = &DAT_1419df7b0;
LAB_14033fd85:
    local_1f8 = (undefined1 *)*puVar6;
    uStack_1f0 = *(undefined4 *)(puVar6 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1f8);
  }
  else {
    puVar6 = (undefined8 *)local_98[2];
    if (puVar6 != &local_1a8) goto LAB_14033fd85;
  }
  local_128 = &local_1a8;
  uVar13 = CONCAT44(uVar16,DAT_141a014a8);
  ppuVar17 = &local_128;
  uVar8 = FUN_140e634e0(local_res8,local_res10,&local_1e8,1,uVar13,&local_128);
  uVar16 = (undefined4)((ulonglong)uVar13 >> 0x20);
  cVar3 = FUN_140e491e0(uVar8);
  if (cVar3 == '\0') {
    local_1b8 = 7;
    local_d0 = 0;
    local_c8 = 0;
    local_c4 = 5;
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    local_100 = 0;
    local_f8 = 0;
    local_f4 = 5;
    if ((int)local_a0[0] < 3) {
      puVar6 = &DAT_1419df7b0;
LAB_14033fe54:
      local_1f8 = (undefined1 *)*puVar6;
      uStack_1f0 = *(undefined4 *)(puVar6 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_1f8);
    }
    else {
      puVar6 = (undefined8 *)local_98[2];
      if (puVar6 != &local_198) goto LAB_14033fe54;
    }
    local_120 = &local_198;
    local_1f8 = (undefined1 *)CONCAT44(uRam0000000141dd094c,_DAT_141dd0948);
    uStack_1f0 = uRam0000000141dd0950;
    uStack_1ec = DAT_141dd0954;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1f8);
    local_118 = local_188;
    ppuVar17 = &local_120;
    puVar6 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_100,1,CONCAT44(uVar16,DAT_1419fdc58),
                           ppuVar17);
    if (puVar6 != &local_178) {
      local_1f8 = (undefined1 *)*puVar6;
      uStack_1f0 = *(undefined4 *)(puVar6 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1f8);
    }
    local_110 = &local_178;
    local_1f8 = (undefined1 *)CONCAT44(uRam0000000141dd098c,_DAT_141dd0988);
    uStack_1f0 = uRam0000000141dd0990;
    uStack_1ec = DAT_141dd0994;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1f8);
    local_108 = local_168;
    FUN_14008e020(local_res8,local_res10,&local_d0,3,&local_118);
    local_res18 = local_c4;
  }
  local_1b8 = 0xc;
  if ((int)local_a0[0] < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_98[2];
  }
  uStack_1cc = 0;
  local_1d8 = (undefined1 *)0x3ff0000000000000;
  uVar5 = FUN_140e851f0(puVar6,&local_1d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (uVar5 < 0x80000000) {
    local_1b8 = 0xe;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    local_1f8 = (undefined1 *)CONCAT44(uRam0000000141dd097c,_DAT_141dd0978);
    uStack_1f0 = uRam0000000141dd0980;
    uStack_1ec = DAT_141dd0984;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1f8);
    local_128 = &local_1a8;
    if ((int)local_a0[0] < 3) {
      puVar6 = &DAT_1419df7b0;
LAB_140340096:
      local_1f8 = (undefined1 *)*puVar6;
      uStack_1f0 = *(undefined4 *)(puVar6 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_1f8);
    }
    else {
      puVar6 = (undefined8 *)local_98[2];
      if (puVar6 != &local_198) goto LAB_140340096;
    }
    local_120 = &local_198;
    local_1f8 = (undefined1 *)CONCAT44(uRam0000000141dd095c,_DAT_141dd0958);
    uStack_1f0 = uRam0000000141dd0960;
    uStack_1ec = DAT_141dd0964;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1f8);
    local_118 = local_188;
    local_1f8 = (undefined1 *)CONCAT44(uRam00000001419e41a4,_DAT_1419e41a0);
    uStack_1f0 = uRam00000001419e41a8;
    uStack_1ec = uRam00000001419e41ac;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1f8);
    local_110 = &local_178;
    local_1f8 = (undefined1 *)CONCAT44(uRam0000000141dd092c,_DAT_141dd0928);
    uStack_1f0 = uRam0000000141dd0930;
    uStack_1ec = DAT_141dd0934;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1f8);
    local_108 = local_168;
    FUN_14008e020(local_res8,local_res10,&local_1e8,5,&local_128);
  }
  local_1b8 = 0x15;
  if ((int)local_a0[0] < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_98[2];
  }
  uStack_1cc = 0;
  local_1d8 = (undefined1 *)0x0;
  iVar4 = FUN_140e851f0(puVar6,&local_1d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (iVar4 != -2 && iVar4 < 0) {
    local_1b8 = 0x19;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    local_1f8 = (undefined1 *)CONCAT44(uRam0000000141dd097c,_DAT_141dd0978);
    uStack_1f0 = uRam0000000141dd0980;
    uStack_1ec = DAT_141dd0984;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1f8);
    local_128 = &local_1a8;
    if ((int)local_a0[0] < 3) {
      puVar6 = &DAT_1419df7b0;
LAB_14034029b:
      local_1f8 = (undefined1 *)*puVar6;
      uStack_1f0 = *(undefined4 *)(puVar6 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_1f8);
    }
    else {
      puVar6 = (undefined8 *)local_98[2];
      if (puVar6 != &local_198) goto LAB_14034029b;
    }
    local_120 = &local_198;
    local_1f8 = (undefined1 *)CONCAT44(uRam0000000141dd093c,_DAT_141dd0938);
    uStack_1f0 = uRam0000000141dd0940;
    uStack_1ec = DAT_141dd0944;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1f8);
    local_118 = local_188;
    FUN_14008e020(local_res8,local_res10,&local_1e8,3,&local_128);
  }
  local_1b8 = 0x12;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  if ((int)local_a0[0] < 1) {
    puVar6 = &DAT_1419df7b0;
LAB_140340382:
    local_1f8 = (undefined1 *)*puVar6;
    uStack_1f0 = *(undefined4 *)(puVar6 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1f8);
  }
  else {
    puVar6 = (undefined8 *)*local_98;
    if (puVar6 != &local_1a8) goto LAB_140340382;
  }
  local_128 = &local_1a8;
  if ((int)local_a0[0] < 3) {
    puVar6 = &DAT_1419df7b0;
LAB_1403403d2:
    local_1f8 = (undefined1 *)*puVar6;
    uStack_1f0 = *(undefined4 *)(puVar6 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1f8);
  }
  else {
    puVar6 = (undefined8 *)local_98[2];
    if (puVar6 != &local_198) goto LAB_1403403d2;
  }
  local_120 = &local_198;
  uVar5 = 2;
  puVar6 = (undefined8 *)gml_Script_InputCheckMany(local_res8,local_res10,&local_1e8,2,&local_128);
  if (puVar6 != &local_138) {
    local_1f8 = (undefined1 *)*puVar6;
    uStack_1f0 = *(undefined4 *)(puVar6 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1f8);
  }
  local_1b8 = 0x13;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  if ((int)local_a0[0] < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_1403404b9:
    local_1f8 = (undefined1 *)*puVar6;
    uStack_1f0 = *(undefined4 *)(puVar6 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1f8);
  }
  else {
    puVar6 = (undefined8 *)local_98[1];
    if (puVar6 != &local_1a8) goto LAB_1403404b9;
  }
  local_128 = &local_1a8;
  if ((int)local_a0[0] < 3) {
    puVar6 = &DAT_1419df7b0;
LAB_140340508:
    local_1f8 = (undefined1 *)*puVar6;
    uStack_1f0 = *(undefined4 *)(puVar6 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1f8);
  }
  else {
    puVar6 = (undefined8 *)local_98[2];
    if (puVar6 != &local_198) goto LAB_140340508;
  }
  local_120 = &local_198;
  ppuVar14 = &local_128;
  puVar6 = (undefined8 *)gml_Script_InputCheckMany(local_res8,local_res10,&local_1e8,2,&local_128);
  if (puVar6 != &local_148) {
    local_1f8 = (undefined1 *)*puVar6;
    uStack_1f0 = *(undefined4 *)(puVar6 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1f8);
  }
  local_1b8 = 0x16;
  cVar3 = FUN_140e491e0(&local_138);
  if ((cVar3 == '\0') && (cVar3 = FUN_140e491e0(&local_148), cVar3 == '\0')) {
    local_1b8 = 0x16;
LAB_14034060b:
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = (undefined1 *)0x0;
  }
  else {
    local_1b8 = 0x19;
    cVar3 = FUN_140e491e0(&local_138);
    if ((cVar3 != '\0') && (cVar3 = FUN_140e491e0(&local_148), cVar3 != '\0')) {
      if ((int)local_a0[0] < 4) {
        puVar6 = &DAT_1419df7b0;
      }
      else {
        puVar6 = (undefined8 *)local_98[3];
      }
      cVar3 = FUN_140e491e0(puVar6);
      if (cVar3 == '\0') {
        local_1b8 = 0x19;
        goto LAB_14034060b;
      }
    }
    local_1b8 = 0x1c;
    cVar3 = FUN_140e491e0(&local_148);
    if (cVar3 == '\0') {
      local_1b8 = 0x1c;
      cVar3 = FUN_140e491e0(&local_138);
      if (cVar3 == '\0') {
        uStack_1cc = 0;
        local_1d8 = (undefined1 *)0x0;
        ppuVar10 = &local_1d8;
      }
      else {
        uStack_1ec = 0;
        local_1f8 = &DAT_bff0000000000000;
        ppuVar10 = (undefined1 **)&local_1f8;
        uVar5 = 1;
      }
      uVar2 = uStack_1cc;
      uVar16 = uStack_1ec;
      local_res20 = uVar5;
      if (ppuVar10 != param_3) {
        local_158 = *(undefined4 *)ppuVar10;
        uStack_154 = *(undefined4 *)((longlong)ppuVar10 + 4);
        uStack_150 = *(undefined4 *)(ppuVar10 + 1);
        uStack_14c = *(undefined4 *)((longlong)ppuVar10 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_158);
      }
      if ((uVar5 & 2) != 0) {
        uVar5 = uVar5 & 0xfffffffd;
        local_res20 = uVar5;
        if ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
      }
      if (((uVar5 & 1) != 0) && ((1 << ((byte)uVar16 & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_1f8);
      }
    }
    else {
      local_1b8 = 0x1d;
      cVar3 = FUN_140e491e0(&local_138);
      if (cVar3 == '\0') {
        local_1b8 = 0x1d;
        cVar3 = FUN_140e491e0(&local_148);
        if (cVar3 == '\0') {
          uStack_1ec = 0;
          local_1f8 = (undefined1 *)0x0;
          ppuVar10 = (undefined1 **)&local_1f8;
          uVar5 = 8;
        }
        else {
          uStack_1cc = 0;
          local_1d8 = (undefined1 *)0x3ff0000000000000;
          ppuVar10 = &local_1d8;
          uVar5 = 4;
        }
        uVar2 = uStack_1cc;
        uVar16 = uStack_1ec;
        local_res20 = uVar5;
        if (ppuVar10 != param_3) {
          local_158 = *(undefined4 *)ppuVar10;
          uStack_154 = *(undefined4 *)((longlong)ppuVar10 + 4);
          uStack_150 = *(undefined4 *)(ppuVar10 + 1);
          uStack_14c = *(undefined4 *)((longlong)ppuVar10 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          FUN_140041b80(param_3,&local_158);
        }
        if ((uVar5 & 8) != 0) {
          uVar5 = uVar5 & 0xfffffff7;
          local_res20 = uVar5;
          if ((1 << ((byte)uVar16 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
        }
        if (((uVar5 & 4) != 0) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_1d8);
        }
      }
      else {
        local_1b8 = 0x1f;
        plVar9 = (longlong *)(**(code **)(*DAT_141dde468 + 8))(DAT_141dde468,DAT_141a026b8);
        if ((int)local_a0[0] < 3) {
          puVar6 = &DAT_1419df7b0;
        }
        else {
          puVar6 = (undefined8 *)local_98[2];
        }
        iVar4 = FUN_140e4a740(puVar6);
        if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0))
        {
          if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                          *(undefined4 *)(lVar1 + 0x24));
            plVar9 = (longlong *)0x0;
          }
          else {
            plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        iVar4 = FUN_140e63cb0(local_90,&local_res8,&local_res10,plVar9);
        if (iVar4 < 1) {
          FUN_140e63970(local_90,&local_res8,&local_res10);
          local_1b8 = 0x30;
          if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          local_1e8 = 0;
          local_1e0 = 0;
          local_1dc = 5;
          local_158 = _DAT_141dd0968;
          uStack_154 = uRam0000000141dd096c;
          uStack_150 = uRam0000000141dd0970;
          uStack_14c = DAT_141dd0974;
          if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          FUN_140041b80(&local_1a8,&local_158);
          local_128 = &local_1a8;
          FUN_14008e020(local_res8,local_res10,&local_1e8,1,&local_128);
        }
        else {
          local_1b8 = 0x22;
          plVar9 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd6e8);
          if ((int)local_a0[0] < 1) {
            puVar6 = &DAT_1419df7b0;
          }
          else {
            puVar6 = (undefined8 *)*local_98;
          }
          iVar4 = FUN_140e4a740(puVar6);
          if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)
             ) {
            if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                            *(undefined4 *)(lVar1 + 0x24));
              plVar9 = (longlong *)0x0;
            }
            else {
              plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
          }
          if (plVar9 != &local_e0) {
            local_158 = (undefined4)*plVar9;
            uStack_154 = *(undefined4 *)((longlong)plVar9 + 4);
            uStack_150 = (undefined4)plVar9[1];
            uStack_14c = *(undefined4 *)((longlong)plVar9 + 0xc);
            if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_e0);
            }
            FUN_140041b80(&local_e0,&local_158);
          }
          local_1b8 = 0x23;
          plVar9 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd6e8);
          if (1 < (int)local_a0[0]) {
            puVar12 = (undefined8 *)local_98[1];
          }
          iVar4 = FUN_140e4a740(puVar12);
          if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)
             ) {
            if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                            *(undefined4 *)(lVar1 + 0x24));
              plVar9 = (longlong *)0x0;
            }
            else {
              plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
          }
          if (plVar9 != &local_f0) {
            local_158 = (undefined4)*plVar9;
            uStack_154 = *(undefined4 *)((longlong)plVar9 + 4);
            uStack_150 = (undefined4)plVar9[1];
            uStack_14c = *(undefined4 *)((longlong)plVar9 + 0xc);
            if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_f0);
            }
            FUN_140041b80(&local_f0,&local_158);
          }
          local_1b8 = 0x26;
          uVar18 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
          uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
          FUN_140e87440(&local_e0,DAT_1419fd758,0x80000000,&local_b0,uVar15,uVar18);
          FUN_140e87440(&local_f0,DAT_1419fd758,0x80000000,&local_c0,uVar15 & 0xffffffffffffff00,
                        uVar18 & 0xffffffffffffff00);
          iVar4 = FUN_140e851f0(&local_b0,&local_c0,DAT_141955260,1);
          if (iVar4 < 1) {
            local_1b8 = 0x2c;
            cVar3 = FUN_140e491e0(&local_148);
            if (cVar3 == '\0') {
              uStack_1ec = 0;
              local_1f8 = (undefined1 *)0x0;
              ppuVar10 = (undefined1 **)&local_1f8;
              uVar5 = 0x80;
            }
            else {
              uStack_1cc = 0;
              local_1d8 = (undefined1 *)0x3ff0000000000000;
              ppuVar10 = &local_1d8;
              uVar5 = 0x40;
            }
            uVar2 = uStack_1cc;
            uVar16 = uStack_1ec;
            local_res20 = uVar5;
            if (ppuVar10 != param_3) {
              local_158 = *(undefined4 *)ppuVar10;
              uStack_154 = *(undefined4 *)((longlong)ppuVar10 + 4);
              uStack_150 = *(undefined4 *)(ppuVar10 + 1);
              uStack_14c = *(undefined4 *)((longlong)ppuVar10 + 0xc);
              if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(param_3);
              }
              FUN_140041b80(param_3,&local_158);
            }
            if ((char)uVar5 < '\0') {
              uVar5 = uVar5 & 0xffffff7f;
              local_res20 = uVar5;
              if ((1 << ((byte)uVar16 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1f8);
              }
            }
            if (((uVar5 & 0x40) != 0) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
              FUN_140041a50(&local_1d8);
            }
          }
          else {
            local_1b8 = 0x28;
            cVar3 = FUN_140e491e0(&local_138);
            if (cVar3 == '\0') {
              uStack_1ec = 0;
              local_1f8 = (undefined1 *)0x0;
              ppuVar10 = (undefined1 **)&local_1f8;
              uVar5 = 0x20;
            }
            else {
              uStack_1cc = 0;
              local_1d8 = &DAT_bff0000000000000;
              ppuVar10 = &local_1d8;
              uVar5 = 0x10;
            }
            uVar2 = uStack_1cc;
            uVar16 = uStack_1ec;
            local_res20 = uVar5;
            if (ppuVar10 != param_3) {
              local_158 = *(undefined4 *)ppuVar10;
              uStack_154 = *(undefined4 *)((longlong)ppuVar10 + 4);
              uStack_150 = *(undefined4 *)(ppuVar10 + 1);
              uStack_14c = *(undefined4 *)((longlong)ppuVar10 + 0xc);
              if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(param_3);
              }
              FUN_140041b80(param_3,&local_158);
            }
            if ((uVar5 & 0x20) != 0) {
              uVar5 = uVar5 & 0xffffffdf;
              local_res20 = uVar5;
              if ((1 << ((byte)uVar16 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1f8);
              }
            }
            if (((uVar5 & 0x10) != 0) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
              FUN_140041a50(&local_1d8);
            }
          }
        }
        if (local_80 != 0) {
          FUN_140e4cd60();
          local_80 = 0;
        }
      }
    }
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_res18 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(&local_1a8,0x10,5,FUN_140041b30);
  if (0 < (int)local_a0[0]) {
    puVar12 = local_98;
    do {
      puVar6 = (undefined8 *)*puVar12;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar12 = puVar12 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_98);
  DAT_141dc7a50 = (undefined8 *)local_1c8;
  return param_3;
}

