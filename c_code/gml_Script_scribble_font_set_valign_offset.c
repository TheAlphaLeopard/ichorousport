// gml_Script_scribble_font_set_valign_offset @ 0x140470f20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_scribble_font_set_valign_offset
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 **ppuVar9;
  uint uVar10;
  int iVar11;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  uint local_res20;
  undefined1 **ppuVar12;
  ulonglong uVar13;
  undefined4 uVar15;
  undefined8 uVar14;
  ulonglong in_stack_fffffffffffffe60;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 *local_188;
  uint uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_148;
  double local_138;
  uint local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 *local_100;
  undefined4 local_f4;
  undefined8 *local_e8;
  byte local_dc;
  double local_d8;
  byte local_cc;
  undefined4 local_c8 [4];
  undefined4 local_b8 [4];
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 **local_98;
  double *local_90;
  undefined4 *local_88;
  undefined4 *local_80;
  undefined1 *local_78 [2];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_res20 = 0;
  local_120 = "gml_Script_scribble_font_set_style_family";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 10;
  uVar15 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(&local_e8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_17c = 0xffffff;
  local_188 = (undefined8 *)0x0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_f4 = 0xffffff;
  local_100 = (undefined8 *)0x0;
  local_18c = 0;
  local_198 = 0;
  local_104 = 0;
  local_110 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf0a0) &&
     (_Init_thread_header(&DAT_141ddf0a0), DAT_141ddf0a0 == -1)) {
    DAT_141ddf0a8 = (longlong *)FUN_140e63aa0(DAT_1419f8e48);
    _Init_thread_footer(&DAT_141ddf0a0);
  }
  if (DAT_141ddc196 == '\0') {
    FUN_140e64380(DAT_141ddf0a8,"gml_Script_scribble_font_set_style_family");
    FUN_140e64380(local_res8,"gml_Script_scribble_font_set_style_family");
  }
  local_118 = 0x12;
  if (DAT_141ddc196 == '\0') {
    DAT_141ddc196 = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddf0a8 + 0x10))(DAT_141ddf0a8,DAT_141a06458);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_158 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_150 = DAT_1419df7b8;
    uStack_14c = DAT_1419df7bc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_158);
    local_78[0] = local_a8;
    ppuVar12 = local_78;
    uVar4 = gml_Script___scribble_texture_get_material(local_res8,local_res10,&local_198,1,ppuVar12)
    ;
    uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_141a06198,0x80000000,&local_68,uVar13,
                  in_stack_fffffffffffffe60 & 0xffffffffffffff00);
    uVar15 = (undefined4)(uVar13 >> 0x20);
    FUN_140e609c0(DAT_141ddf0a8);
    if (&local_68 != puVar3) {
      local_158 = (undefined8 *)local_68;
      uStack_150 = uStack_60;
      uStack_14c = uStack_5c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_158);
    }
    FUN_140e60910(1);
  }
  local_118 = 0xc;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  local_158 = (undefined8 *)CONCAT44(uRam00000001419e5e94,_DAT_1419e5e90);
  uStack_150 = uRam00000001419e5e98;
  uStack_14c = uRam00000001419e5e9c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_158);
  local_98 = &local_e8;
  local_158 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_150 = DAT_1419df7b8;
  uStack_14c = DAT_1419df7bc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_158);
  local_90 = &local_d8;
  uVar4 = CONCAT44(uVar15,DAT_1419fd218);
  ppuVar5 = (undefined8 **)FUN_140e634e0(local_res8,local_res10,&local_198,2,uVar4,&local_98);
  uVar15 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (ppuVar5 != &local_188) {
    local_158 = *ppuVar5;
    uStack_150 = *(undefined4 *)(ppuVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)ppuVar5 + 0xc);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_158);
  }
  local_118 = 0xd;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 1) {
    ppuVar5 = (undefined8 **)&DAT_1419df7b0;
LAB_140471303:
    local_158 = *ppuVar5;
    uStack_150 = *(undefined4 *)(ppuVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)ppuVar5 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_158);
  }
  else {
    ppuVar5 = (undefined8 **)*param_5;
    if (ppuVar5 != &local_e8) goto LAB_140471303;
  }
  local_98 = &local_e8;
  uVar14 = CONCAT44(uVar15,DAT_1419fdbf8);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_198,1,uVar14,&local_98);
  uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    uStack_16c = DAT_1419df7bc;
    uStack_170 = DAT_1419df7b8;
    if ((1 << ((byte)DAT_1419df7bc & 0x1f) & 0x46U) == 0) {
      local_178 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    }
    else {
      FUN_1400419b0(&local_178,&DAT_1419df7b0);
    }
    puVar7 = &local_178;
    uVar10 = 0x102;
  }
  else {
    if (param_4 < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*param_5;
    }
    uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_150 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
      local_158 = (undefined8 *)*puVar7;
    }
    else {
      FUN_1400419b0(&local_158);
    }
    puVar7 = &local_158;
    uVar10 = 1;
  }
  local_res20 = uVar10;
  puVar6 = (undefined8 *)FUN_140e48e40(&local_188,0);
  FUN_140e609c0(*local_188);
  if (puVar7 != puVar6) {
    local_168 = *(undefined4 *)puVar7;
    uStack_164 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_160 = *(undefined4 *)(puVar7 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_168);
  }
  if (((uVar10 & 2) != 0) &&
     (uVar10 = uVar10 & 0xfffffffd, local_res20 = uVar10,
     (1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_178);
  }
  if (((uVar10 & 1) != 0) &&
     (uVar10 = uVar10 & 0xfffffffe, local_res20 = uVar10,
     (1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_158);
  }
  FUN_140e60910(1);
  local_118 = 0xe;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  if (param_4 < 2) {
    ppuVar5 = (undefined8 **)&DAT_1419df7b0;
LAB_1404714f3:
    local_168 = *(undefined4 *)ppuVar5;
    uStack_164 = *(undefined4 *)((longlong)ppuVar5 + 4);
    uStack_160 = *(undefined4 *)(ppuVar5 + 1);
    uStack_15c = *(undefined4 *)((longlong)ppuVar5 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_168);
  }
  else {
    ppuVar5 = (undefined8 **)param_5[1];
    if (ppuVar5 != &local_e8) goto LAB_1404714f3;
  }
  local_98 = &local_e8;
  uVar14 = CONCAT44(uVar15,DAT_1419fdbf8);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_198,1,uVar14,&local_98);
  uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    uStack_14c = DAT_1419df7bc;
    uStack_150 = DAT_1419df7b8;
    if ((1 << ((byte)DAT_1419df7bc & 0x1f) & 0x46U) == 0) {
      local_158 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    }
    else {
      FUN_1400419b0(&local_158,&DAT_1419df7b0);
    }
    puVar7 = &local_158;
    uVar10 = uVar10 | 0x208;
  }
  else {
    if (param_4 < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)param_5[1];
    }
    uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_170 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
      local_178 = *puVar7;
    }
    else {
      FUN_1400419b0(&local_178);
    }
    puVar7 = &local_178;
    uVar10 = uVar10 | 4;
  }
  local_res20 = uVar10;
  puVar6 = (undefined8 *)FUN_140e48e40(&local_188,1);
  FUN_140e609c0(*local_188);
  if (puVar7 != puVar6) {
    local_168 = *(undefined4 *)puVar7;
    uStack_164 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_160 = *(undefined4 *)(puVar7 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_168);
  }
  if (((uVar10 & 8) != 0) &&
     (uVar10 = uVar10 & 0xfffffff7, local_res20 = uVar10,
     (1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_158);
  }
  if (((uVar10 & 4) != 0) &&
     (uVar10 = uVar10 & 0xfffffffb, local_res20 = uVar10,
     (1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_178);
  }
  FUN_140e60910(1);
  local_118 = 0xf;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  if (param_4 < 3) {
    ppuVar5 = (undefined8 **)&DAT_1419df7b0;
LAB_1404716e8:
    local_168 = *(undefined4 *)ppuVar5;
    uStack_164 = *(undefined4 *)((longlong)ppuVar5 + 4);
    uStack_160 = *(undefined4 *)(ppuVar5 + 1);
    uStack_15c = *(undefined4 *)((longlong)ppuVar5 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_168);
  }
  else {
    ppuVar5 = (undefined8 **)param_5[2];
    if (ppuVar5 != &local_e8) goto LAB_1404716e8;
  }
  local_98 = &local_e8;
  uVar14 = CONCAT44(uVar15,DAT_1419fdbf8);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_198,1,uVar14,&local_98);
  uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    uStack_14c = DAT_1419df7bc;
    uStack_150 = DAT_1419df7b8;
    if ((1 << ((byte)DAT_1419df7bc & 0x1f) & 0x46U) == 0) {
      local_158 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    }
    else {
      FUN_1400419b0(&local_158,&DAT_1419df7b0);
    }
    puVar7 = &local_158;
    uVar10 = uVar10 | 0x420;
  }
  else {
    if (param_4 < 3) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)param_5[2];
    }
    uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_170 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
      local_178 = *puVar7;
    }
    else {
      FUN_1400419b0(&local_178);
    }
    puVar7 = &local_178;
    uVar10 = uVar10 | 0x10;
  }
  local_res20 = uVar10;
  puVar6 = (undefined8 *)FUN_140e48e40(&local_188,2);
  FUN_140e609c0(*local_188);
  if (puVar7 != puVar6) {
    local_168 = *(undefined4 *)puVar7;
    uStack_164 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_160 = *(undefined4 *)(puVar7 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_168);
  }
  if (((uVar10 & 0x20) != 0) &&
     (uVar10 = uVar10 & 0xffffffdf, local_res20 = uVar10,
     (1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_158);
  }
  if (((uVar10 & 0x10) != 0) &&
     (uVar10 = uVar10 & 0xffffffef, local_res20 = uVar10,
     (1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_178);
  }
  FUN_140e60910(1);
  local_118 = 0x10;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  if (param_4 < 4) {
    ppuVar5 = (undefined8 **)&DAT_1419df7b0;
  }
  else {
    ppuVar5 = (undefined8 **)param_5[3];
    if (ppuVar5 == &local_e8) goto LAB_14047190f;
  }
  local_168 = *(undefined4 *)ppuVar5;
  uStack_164 = *(undefined4 *)((longlong)ppuVar5 + 4);
  uStack_160 = *(undefined4 *)(ppuVar5 + 1);
  uStack_15c = *(undefined4 *)((longlong)ppuVar5 + 0xc);
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_168);
LAB_14047190f:
  local_98 = &local_e8;
  uVar14 = CONCAT44(uVar15,DAT_1419fdbf8);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_198,1,uVar14,&local_98);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    uStack_14c = DAT_1419df7bc;
    uStack_150 = DAT_1419df7b8;
    if ((1 << ((byte)DAT_1419df7bc & 0x1f) & 0x46U) == 0) {
      local_158 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    }
    else {
      FUN_1400419b0(&local_158,&DAT_1419df7b0);
    }
    puVar3 = &local_158;
    uVar10 = uVar10 | 0x880;
  }
  else {
    if (3 < param_4) {
      puVar3 = (undefined8 *)param_5[3];
    }
    uStack_16c = *(undefined4 *)((longlong)puVar3 + 0xc);
    uStack_170 = *(undefined4 *)(puVar3 + 1);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
      local_178 = *puVar3;
    }
    else {
      FUN_1400419b0(&local_178,puVar3);
    }
    puVar3 = &local_178;
    uVar10 = uVar10 | 0x40;
  }
  local_res20 = uVar10;
  puVar7 = (undefined8 *)FUN_140e48e40(&local_188,3);
  FUN_140e609c0(*local_188);
  if (puVar3 != puVar7) {
    local_168 = *(undefined4 *)puVar3;
    uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_160 = *(undefined4 *)(puVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_168);
  }
  if (((char)uVar10 < '\0') &&
     (uVar10 = uVar10 & 0xffffff7f, local_res20 = uVar10,
     (1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_158);
  }
  if (((uVar10 & 0x40) != 0) && ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_178);
  }
  FUN_140e60910(1);
  local_118 = 0x14;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_12c = 0;
  local_138 = 0.0;
  iVar11 = 4;
  do {
    uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
    iVar11 = iVar11 + -1;
    local_118 = 0x17;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    local_110 = 0;
    local_108 = 0;
    local_104 = 5;
    puVar8 = (undefined4 *)(**(code **)(*DAT_141ddf0a8 + 8))(DAT_141ddf0a8,DAT_141a06458);
    local_98 = &local_188;
    local_90 = &local_138;
    if (puVar8 != local_c8) {
      local_168 = *puVar8;
      uStack_164 = puVar8[1];
      uStack_160 = puVar8[2];
      uStack_15c = puVar8[3];
      if ((1 << ((byte)local_c8[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_168);
    }
    uVar4 = CONCAT44(uVar15,DAT_141a03ca8);
    local_88 = local_c8;
    puVar8 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_110,2,uVar4,&local_98);
    uVar15 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (puVar8 != local_b8) {
      local_168 = *puVar8;
      uStack_164 = puVar8[1];
      uStack_160 = puVar8[2];
      uStack_15c = puVar8[3];
      if ((1 << ((byte)local_b8[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_168);
    }
    local_80 = local_b8;
    uVar4 = CONCAT44(uVar15,DAT_1419ff4f8);
    ppuVar5 = (undefined8 **)FUN_140e634e0(local_res8,local_res10,&local_198,2,uVar4,&local_88);
    uVar15 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (ppuVar5 != &local_100) {
      local_168 = *(undefined4 *)ppuVar5;
      uStack_164 = *(undefined4 *)((longlong)ppuVar5 + 4);
      uStack_160 = *(undefined4 *)(ppuVar5 + 1);
      uStack_15c = *(undefined4 *)((longlong)ppuVar5 + 0xc);
      if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_100);
      }
      FUN_140041b80(&local_100,&local_168);
    }
    local_118 = 0x18;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_98 = &local_100;
    uVar14 = CONCAT44(uVar15,DAT_1419fcb88);
    uVar4 = FUN_140e634e0(local_res8,local_res10,&local_198,1,uVar14,&local_98);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_118 = 0x1a;
      iVar2 = FUN_140e63cb0(&local_158,&local_res8,&local_res10,&local_100);
      if (0 < iVar2) {
        do {
          local_118 = 0x1c;
          ppuVar9 = (undefined8 **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a06318);
          FUN_140e609c0(local_res8);
          ppuVar5 = (undefined8 **)0x0;
          if (((uStack_17c & 0xffffff) == 2) && (local_188 != (undefined8 *)0x0)) {
            if (*(int *)((longlong)local_188 + 0x24) < 1) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
            }
            else {
              ppuVar5 = (undefined8 **)local_188[1];
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
            ppuVar5 = &local_188;
          }
          if (ppuVar5 != ppuVar9) {
            local_168 = *(undefined4 *)ppuVar5;
            uStack_164 = *(undefined4 *)((longlong)ppuVar5 + 4);
            uStack_160 = *(undefined4 *)(ppuVar5 + 1);
            uStack_15c = *(undefined4 *)((longlong)ppuVar5 + 0xc);
            if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(ppuVar9);
            }
            FUN_140041b80(ppuVar9,&local_168);
          }
          FUN_140e60910(1);
          local_118 = 0x1d;
          ppuVar9 = (undefined8 **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a06428);
          FUN_140e609c0(local_res8);
          ppuVar5 = (undefined8 **)0x0;
          if (((uStack_17c & 0xffffff) == 2) && (local_188 != (undefined8 *)0x0)) {
            if (*(int *)((longlong)local_188 + 0x24) < 2) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
            }
            else {
              ppuVar5 = (undefined8 **)(local_188[1] + 0x10);
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
            ppuVar5 = &local_188;
          }
          if (ppuVar5 != ppuVar9) {
            local_168 = *(undefined4 *)ppuVar5;
            uStack_164 = *(undefined4 *)((longlong)ppuVar5 + 4);
            uStack_160 = *(undefined4 *)(ppuVar5 + 1);
            uStack_15c = *(undefined4 *)((longlong)ppuVar5 + 0xc);
            if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(ppuVar9);
            }
            FUN_140041b80(ppuVar9,&local_168);
          }
          FUN_140e60910(1);
          local_118 = 0x1e;
          ppuVar9 = (undefined8 **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a06258);
          FUN_140e609c0(local_res8);
          ppuVar5 = (undefined8 **)0x0;
          if (((uStack_17c & 0xffffff) == 2) && (local_188 != (undefined8 *)0x0)) {
            if (*(int *)((longlong)local_188 + 0x24) < 3) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",2);
            }
            else {
              ppuVar5 = (undefined8 **)(local_188[1] + 0x20);
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
            ppuVar5 = &local_188;
          }
          if (ppuVar5 != ppuVar9) {
            local_168 = *(undefined4 *)ppuVar5;
            uStack_164 = *(undefined4 *)((longlong)ppuVar5 + 4);
            uStack_160 = *(undefined4 *)(ppuVar5 + 1);
            uStack_15c = *(undefined4 *)((longlong)ppuVar5 + 0xc);
            if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(ppuVar9);
            }
            FUN_140041b80(ppuVar9,&local_168);
          }
          FUN_140e60910(1);
          local_118 = 0x1f;
          ppuVar9 = (undefined8 **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a064a8);
          FUN_140e609c0(local_res8);
          ppuVar5 = (undefined8 **)0x0;
          if (((uStack_17c & 0xffffff) == 2) && (local_188 != (undefined8 *)0x0)) {
            if (*(int *)((longlong)local_188 + 0x24) < 4) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",3);
            }
            else {
              ppuVar5 = (undefined8 **)(local_188[1] + 0x30);
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
            ppuVar5 = &local_188;
          }
          if (ppuVar5 != ppuVar9) {
            local_168 = *(undefined4 *)ppuVar5;
            uStack_164 = *(undefined4 *)((longlong)ppuVar5 + 4);
            uStack_160 = *(undefined4 *)(ppuVar5 + 1);
            uStack_15c = *(undefined4 *)((longlong)ppuVar5 + 0xc);
            if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(ppuVar9);
            }
            FUN_140041b80(ppuVar9,&local_168);
          }
          FUN_140e60910(1);
          cVar1 = FUN_140e643f0(&local_158,&local_res8,&local_res10);
        } while (cVar1 != '\0');
      }
      FUN_140e63970(&local_158,&local_res8,&local_res10);
      if (local_148 != 0) {
        FUN_140e4cd60();
        local_148 = 0;
      }
    }
    local_118 = 0x23;
    uVar10 = local_12c & 0xffffff;
    if (uVar10 == 0) {
LAB_140472060:
      local_138 = local_138 + 1.0;
    }
    else {
      if (uVar10 == 1) {
        local_138 = (double)FUN_140e4b060(&local_138);
        local_12c = 0;
        goto LAB_140472060;
      }
      if (uVar10 == 7) {
        local_138 = (double)CONCAT44(local_138._4_4_,local_138._0_4_ + 1);
      }
      else if (uVar10 == 10) {
        local_138 = (double)((longlong)local_138 + 1);
      }
      else {
        if (uVar10 == 0xd) {
          local_12c = 0;
          goto LAB_140472060;
        }
        FUN_140042910(&DAT_14172c3d8,&local_138,&local_138);
      }
    }
    if (iVar11 < 1) {
      if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_110);
      }
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_100);
      }
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      _eh_vector_destructor_iterator_(&local_e8,0x10,5,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_128;
      return local_res18;
    }
  } while( true );
}

