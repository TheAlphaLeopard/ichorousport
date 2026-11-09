// gml_Script_InputCursorY @ 0x140317650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_InputCursorY
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  uint uVar14;
  longlong *local_res8;
  undefined8 local_res10;
  longlong *local_res18;
  uint local_res20;
  ulonglong uVar15;
  undefined4 uVar18;
  undefined1 **ppuVar16;
  longlong **pplVar17;
  ulonglong in_stack_fffffffffffffe50;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  longlong local_188;
  byte local_17c;
  longlong local_178;
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  longlong local_158;
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  longlong local_138;
  undefined4 local_130;
  uint local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  longlong *local_108;
  longlong *local_100;
  undefined1 *local_f8;
  longlong *local_f0;
  undefined1 *local_e8;
  uint local_e0;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  longlong local_c0;
  undefined4 local_b8;
  uint local_b4;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88 [2];
  undefined8 *local_80;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_res20 = 0;
  local_d0 = "gml_Script_InputCursorX";
  local_d8 = DAT_141dc7a50;
  local_c8 = 10;
  uVar14 = 2;
  DAT_141dc7a50 = &local_d8;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_88,param_4,2,param_5);
  uVar13 = 1;
  _eh_vector_constructor_iterator_(&local_188,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_e0 = 0xffffff;
  local_b4 = 0xffffff;
  local_c0 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_18c = 0;
  local_198 = 0;
  local_10c = 0;
  local_118 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde128) &&
     (_Init_thread_header(&DAT_141dde128), DAT_141dde128 == -1)) {
    DAT_141dde120 = (longlong *)FUN_140e63aa0(DAT_1419f07e8);
    _Init_thread_footer(&DAT_141dde128);
  }
  local_c8 = 10;
  plVar11 = &DAT_1419df7b0;
  uVar12 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 1) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)*local_80;
  }
  iVar4 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_c8 = 10;
    if ((int)local_88[0] < 1) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)*local_80;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
    *puVar10 = 0;
  }
  if ((int)local_88[0] < 2) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_80[1];
  }
  iVar4 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar4 == 0) && (1 < (int)local_88[0])) &&
     (puVar10 = (undefined8 *)local_80[1], puVar10 != &DAT_1419df7b0)) {
    local_1a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1a0 = DAT_1419df7b8;
    uStack_19c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_1a8);
  }
  if (DAT_141ddc0cd == '\0') {
    FUN_140e64380(DAT_141dde120,"gml_Script_InputCursorX");
    FUN_140e64380(local_res8,"gml_Script_InputCursorX");
  }
  local_c8 = 0xc;
  if (DAT_141ddc0cd == '\0') {
    DAT_141ddc0cd = '\x01';
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    plVar6 = (longlong *)(**(code **)(*DAT_141dde120 + 0x10))(DAT_141dde120,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde120);
    uVar15 = 0;
    plVar7 = (longlong *)
             gml_Script____struct___12___InputCursorTransformCoordinate___InputCursorTransformCoordinate
                       (local_res8,local_res10,&local_198,0,0);
    if (plVar7 != plVar6) {
      local_1a8 = *plVar7;
      uStack_1a0 = (undefined4)plVar7[1];
      uStack_19c = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar6);
      }
      FUN_140041b80(plVar6,&local_1a8);
    }
    FUN_140e60910(1);
    uVar8 = (**(code **)(*DAT_141dde120 + 8))(DAT_141dde120,DAT_1419fcb48);
    plVar6 = (longlong *)(**(code **)(*DAT_141dde120 + 0x10))(DAT_141dde120,DAT_141a026b8);
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_140e87440(uVar8,DAT_1419fed38,0x80000000,&local_98,uVar15,
                  in_stack_fffffffffffffe50 & 0xffffffffffffff00);
    uVar13 = (undefined4)(uVar15 >> 0x20);
    FUN_140e609c0(DAT_141dde120);
    if (&local_98 != plVar6) {
      local_1a8 = local_98;
      uStack_1a0 = uStack_90;
      uStack_19c = uStack_8c;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar6);
      }
      FUN_140041b80(plVar6,&local_1a8);
    }
    FUN_140e60910(1);
  }
  local_c8 = 4;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  if ((int)local_88[0] < 1) {
    plVar6 = &DAT_1419df7b0;
LAB_140317a45:
    local_1a8 = *plVar6;
    uStack_1a0 = (undefined4)plVar6[1];
    uStack_19c = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1a8);
  }
  else {
    plVar6 = (longlong *)*local_80;
    if (plVar6 != &local_188) goto LAB_140317a45;
  }
  local_108 = &local_188;
  uVar9 = CONCAT44(uVar13,DAT_141a014a8);
  uVar8 = FUN_140e634e0(local_res8,local_res10,&local_198,1,uVar9,&local_108);
  uVar18 = (undefined4)((ulonglong)uVar9 >> 0x20);
  cVar3 = FUN_140e491e0(uVar8);
  uVar13 = 0;
  if (cVar3 == '\0') {
    local_c8 = 6;
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if ((int)local_88[0] < 1) {
      plVar6 = &DAT_1419df7b0;
LAB_140317b16:
      local_1a8 = *plVar6;
      uStack_1a0 = (undefined4)plVar6[1];
      uStack_19c = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1a8);
    }
    else {
      plVar6 = (longlong *)*local_80;
      if (plVar6 != &local_178) goto LAB_140317b16;
    }
    local_100 = &local_178;
    local_1a8 = CONCAT44(uRam0000000141dd009c,_DAT_141dd0098);
    uStack_1a0 = uRam0000000141dd00a0;
    uStack_19c = DAT_141dd00a4;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1a8);
    local_f8 = local_168;
    plVar6 = (longlong *)
             FUN_140e634e0(local_res8,local_res10,&local_128,1,CONCAT44(uVar18,DAT_1419fdc58),
                           &local_100);
    if (plVar6 != &local_158) {
      local_1a8 = *plVar6;
      uStack_1a0 = (undefined4)plVar6[1];
      uStack_19c = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1a8);
    }
    local_f0 = &local_158;
    local_1a8 = CONCAT44(uRam0000000141dd006c,_DAT_141dd0068);
    uStack_1a0 = uRam0000000141dd0070;
    uStack_19c = DAT_141dd0074;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1a8);
    local_e8 = local_148;
    ppuVar16 = &local_f8;
    FUN_14008e020(local_res8,local_res10,&local_118,3,ppuVar16);
    uVar18 = (undefined4)((ulonglong)ppuVar16 >> 0x20);
    uVar13 = local_10c;
  }
  local_c8 = 0xc;
  if ((int)local_88[0] < 1) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)*local_80;
  }
  local_12c = 0;
  local_138 = 0x3ff0000000000000;
  uVar5 = FUN_140e851f0(puVar10,&local_138,DAT_141955260,1);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (uVar5 < 0x80000000) {
    local_c8 = 0x10;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_1a8 = CONCAT44(uRam0000000141dd007c,_DAT_141dd0078);
    uStack_1a0 = uRam0000000141dd0080;
    uStack_19c = DAT_141dd0084;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1a8);
    local_108 = &local_188;
    if ((int)local_88[0] < 1) {
      plVar6 = &DAT_1419df7b0;
LAB_140317d5d:
      local_1a8 = *plVar6;
      uStack_1a0 = (undefined4)plVar6[1];
      uStack_19c = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1a8);
    }
    else {
      plVar6 = (longlong *)*local_80;
      if (plVar6 != &local_178) goto LAB_140317d5d;
    }
    local_100 = &local_178;
    local_1a8 = CONCAT44(uRam0000000141dd004c,_DAT_141dd0048);
    uStack_1a0 = uRam0000000141dd0050;
    uStack_19c = DAT_141dd0054;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1a8);
    local_f8 = local_168;
    local_1a8 = CONCAT44(uRam00000001419e3f64,_DAT_1419e3f60);
    uStack_1a0 = uRam00000001419e3f68;
    uStack_19c = uRam00000001419e3f6c;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1a8);
    local_f0 = &local_158;
    local_1a8 = CONCAT44(uRam0000000141dd008c,_DAT_141dd0088);
    uStack_1a0 = uRam0000000141dd0090;
    uStack_19c = DAT_141dd0094;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1a8);
    local_e8 = local_148;
    pplVar17 = &local_108;
    FUN_14008e020(local_res8,local_res10,&local_198,5,pplVar17);
    uVar18 = (undefined4)((ulonglong)pplVar17 >> 0x20);
  }
  local_c8 = 0x18;
  if ((int)local_88[0] < 1) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)*local_80;
  }
  local_12c = 0;
  local_138 = 0;
  iVar4 = FUN_140e851f0(puVar10,&local_138,DAT_141955260,1);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar4 != -2 && iVar4 < 0) {
    local_c8 = 0x18;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_1a8 = CONCAT44(uRam0000000141dd007c,_DAT_141dd0078);
    uStack_1a0 = uRam0000000141dd0080;
    uStack_19c = DAT_141dd0084;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1a8);
    local_108 = &local_188;
    if ((int)local_88[0] < 1) {
      plVar6 = &DAT_1419df7b0;
LAB_140317f64:
      local_1a8 = *plVar6;
      uStack_1a0 = (undefined4)plVar6[1];
      uStack_19c = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1a8);
    }
    else {
      plVar6 = (longlong *)*local_80;
      if (plVar6 != &local_178) goto LAB_140317f64;
    }
    local_100 = &local_178;
    local_1a8 = CONCAT44(uRam0000000141dd005c,_DAT_141dd0058);
    uStack_1a0 = uRam0000000141dd0060;
    uStack_19c = DAT_141dd0064;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1a8);
    local_f8 = local_168;
    pplVar17 = &local_108;
    FUN_14008e020(local_res8,local_res10,&local_198,3,pplVar17);
    uVar18 = (undefined4)((ulonglong)pplVar17 >> 0x20);
  }
  local_c8 = 4;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  local_1a8 = CONCAT44(uRam00000001419e3f74,_DAT_1419e3f70);
  uStack_1a0 = uRam00000001419e3f78;
  uStack_19c = uRam00000001419e3f7c;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_1a8);
  local_108 = &local_188;
  uVar9 = CONCAT44(uVar18,DAT_141a014a8);
  uVar8 = FUN_140e634e0(local_res8,local_res10,&local_198,1,uVar9,&local_108);
  uVar18 = (undefined4)((ulonglong)uVar9 >> 0x20);
  cVar3 = FUN_140e491e0(uVar8);
  if (cVar3 == '\0') {
    local_c8 = 7;
    if ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    local_1a8 = CONCAT44(uRam00000001419e3f74,_DAT_1419e3f70);
    uStack_1a0 = uRam00000001419e3f78;
    uStack_19c = uRam00000001419e3f7c;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1a8);
    local_100 = &local_178;
    local_1a8 = CONCAT44(uRam0000000141dd003c,_DAT_141dd0038);
    uStack_1a0 = uRam0000000141dd0040;
    uStack_19c = DAT_141dd0044;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1a8);
    local_f8 = local_168;
    plVar6 = (longlong *)
             FUN_140e634e0(local_res8,local_res10,&local_128,1,CONCAT44(uVar18,DAT_1419fdc58),
                           &local_100);
    if (plVar6 != &local_158) {
      local_1a8 = *plVar6;
      uStack_1a0 = (undefined4)plVar6[1];
      uStack_19c = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1a8);
    }
    local_f0 = &local_158;
    local_1a8 = CONCAT44(uRam0000000141dd006c,_DAT_141dd0068);
    uStack_1a0 = uRam0000000141dd0070;
    uStack_19c = DAT_141dd0074;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1a8);
    local_e8 = local_148;
    FUN_14008e020(local_res8,local_res10,&local_118,3,&local_f8);
    uVar13 = local_10c;
  }
  local_c8 = 0x12;
  plVar6 = (longlong *)(**(code **)(*DAT_141dde120 + 8))(DAT_141dde120,DAT_141a026b8);
  if ((int)local_88[0] < 1) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)*local_80;
  }
  iVar4 = FUN_140e4a740(puVar10);
  if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  iVar4 = FUN_140e63cb0(local_78,&local_res8,&local_res10,plVar6);
  if (iVar4 < 1) {
    FUN_140e63970(local_78,&local_res8,&local_res10);
    plVar11 = local_res18;
    uVar5 = local_e0;
    goto LAB_1403185d4;
  }
  local_c8 = 0x14;
  uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe328);
  uVar9 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe528);
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  FUN_140041c60(&local_188,uVar8);
  local_108 = &local_188;
  FUN_140041c60(&local_178,uVar9);
  local_100 = &local_178;
  local_1a8 = CONCAT44(uRam0000000141dc6424,_DAT_141dc6420);
  uStack_1a0 = uRam0000000141dc6428;
  uStack_19c = uRam0000000141dc642c;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_1a8);
  local_f8 = local_168;
  if (((int)local_88[0] < 2) || (plVar11 = (longlong *)local_80[1], plVar11 != &local_c0)) {
    local_1a8 = *plVar11;
    uStack_1a0 = (undefined4)plVar11[1];
    uStack_19c = *(undefined4 *)((longlong)plVar11 + 0xc);
    FUN_140041b80(&local_c0,&local_1a8);
    uVar5 = local_b4;
  }
  else {
    uVar5 = local_e0;
  }
  if ((uVar5 & 0xffffff) == 3) {
    if (local_c0 == 0) goto LAB_140318454;
LAB_140318423:
    local_130 = local_b8;
    local_12c = uVar5;
    if ((1 << ((byte)uVar5 & 0x1f) & 0x46U) == 0) {
      local_138 = local_c0;
    }
    else {
      FUN_1400419b0(&local_138,&local_c0);
    }
    plVar11 = &local_138;
  }
  else {
    if ((uVar5 & 0xffffff) != 5) goto LAB_140318423;
LAB_140318454:
    uStack_19c = 0;
    local_1a8 = 0;
    plVar11 = &local_1a8;
    uVar14 = 1;
  }
  uVar18 = uStack_19c;
  local_res20 = uVar14;
  FUN_140041c60(&local_158,plVar11);
  if (((uVar14 & 2) != 0) &&
     (uVar14 = uVar14 & 0xfffffffd, local_res20 = uVar14,
     (1 << ((byte)local_12c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_138);
  }
  if (((uVar14 & 1) != 0) && ((1 << ((byte)uVar18 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1a8);
  }
  local_f0 = &local_158;
  local_1a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1a0 = DAT_1419df7b8;
  uStack_19c = DAT_1419df7bc;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_1a8);
  local_e8 = local_148;
  uVar8 = FUN_140087c90(local_res8,local_res10,&local_198,5,&local_108);
  FUN_140e87170(uVar8,DAT_1419fe0e8,0x80000000,&local_a8,local_res8,local_res10);
  plVar11 = local_res18;
  if (&local_a8 != local_res18) {
    local_1a8 = local_a8;
    uStack_1a0 = uStack_a0;
    uStack_19c = uStack_9c;
    if ((1 << ((byte)*(undefined4 *)((longlong)local_res18 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_res18);
    }
    FUN_140041b80(plVar11,&local_1a8);
  }
LAB_1403185d4:
  if (local_68 != 0) {
    FUN_140e4cd60();
    local_68 = 0;
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_188,0x10,5,FUN_140041b30);
  if (0 < (int)local_88[0]) {
    puVar10 = local_80;
    do {
      puVar2 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return plVar11;
}

