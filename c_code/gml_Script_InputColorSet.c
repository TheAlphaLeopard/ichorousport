// gml_Script_InputColorSet @ 0x140307e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputColorSet
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined8 **ppuVar13;
  ulonglong in_stack_fffffffffffffeb0;
  undefined8 **ppuVar14;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_c0 = "gml_Script_InputColorReset";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 7;
  FUN_140041df0(local_48,param_4,1,param_5);
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_13c = 0;
  local_148 = 0;
  local_a4 = 0;
  local_b0 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde030) &&
     (_Init_thread_header(&DAT_141dde030), DAT_141dde030 == -1)) {
    DAT_141dde028 = (longlong *)FUN_140e63aa0(DAT_1419efce8);
    _Init_thread_footer(&DAT_141dde030);
  }
  local_b8 = 7;
  puVar9 = &DAT_1419df7b0;
  uVar10 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_b8 = 7;
    if ((int)local_48[0] < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*local_40;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  if (DAT_141ddc0bd == '\0') {
    FUN_140e64380(DAT_141dde028,"gml_Script_InputColorReset");
    FUN_140e64380(param_1,"gml_Script_InputColorReset");
  }
  local_b8 = 9;
  if (DAT_141ddc0bd == '\0') {
    DAT_141ddc0bd = '\x01';
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde028 + 0x10))(DAT_141dde028,DAT_141a026b8);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    uVar12 = 0;
    uVar6 = gml_Script__funcSafeReal_anon_2040__funcSplit_anon_1903___InputCompareVersions___InputCompareVersions
                      (param_1,param_2,&local_148,0,0);
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419fed38,0x80000000,&local_68,uVar12,
                  in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
    uVar11 = (undefined4)(uVar12 >> 0x20);
    FUN_140e609c0(DAT_141dde028);
    if (&local_68 != puVar5) {
      local_138 = local_68;
      uStack_130 = uStack_60;
      uStack_12c = uStack_5c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_138);
    }
    FUN_140e60910(1);
  }
  local_b8 = 5;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14030813c:
    local_138 = *puVar5;
    uStack_130 = *(undefined4 *)(puVar5 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_138);
  }
  else {
    puVar5 = (undefined8 *)*local_40;
    if (puVar5 != &local_128) goto LAB_14030813c;
  }
  local_90 = &local_128;
  ppuVar14 = &local_90;
  ppuVar13 = (undefined8 **)CONCAT44(uVar11,DAT_141a014a8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_148,1,ppuVar13,ppuVar14);
  cVar2 = FUN_140e491e0(uVar6);
  uVar11 = 0;
  if (cVar2 == '\0') {
    local_b8 = 10;
    local_b0 = 0;
    local_a8 = 0;
    local_a4 = 5;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    uVar11 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if ((int)local_48[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_140308205:
      local_138 = *puVar5;
      uStack_130 = *(undefined4 *)(puVar5 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_138);
    }
    else {
      puVar5 = (undefined8 *)*local_40;
      if (puVar5 != &local_118) goto LAB_140308205;
    }
    local_88 = &local_118;
    local_138 = CONCAT44(uRam0000000141dcfa1c,_DAT_141dcfa18);
    uStack_130 = uRam0000000141dcfa20;
    uStack_12c = DAT_141dcfa24;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_138);
    local_80 = &local_108;
    ppuVar14 = &local_88;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar11,DAT_1419fdc58),ppuVar14);
    if (puVar5 != &local_f8) {
      local_138 = *puVar5;
      uStack_130 = *(undefined4 *)(puVar5 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_138);
    }
    local_78 = &local_f8;
    local_138 = CONCAT44(uRam0000000141dcfa5c,_DAT_141dcfa58);
    uStack_130 = uRam0000000141dcfa60;
    uStack_12c = DAT_141dcfa64;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_138);
    local_70 = local_e8;
    ppuVar13 = &local_80;
    FUN_14008e020(param_1,param_2,&local_b0,3,ppuVar13);
    uVar11 = local_a4;
  }
  local_b8 = 0x10;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
  }
  uStack_12c = 0;
  local_138 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar5,&local_138,DAT_141955260,1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (uVar4 < 0x80000000) {
    local_b8 = 0x10;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_138 = CONCAT44(uRam0000000141dcfa6c,_DAT_141dcfa68);
    uStack_130 = uRam0000000141dcfa70;
    uStack_12c = DAT_141dcfa74;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_138);
    local_90 = &local_128;
    if ((int)local_48[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_140308443:
      local_138 = *puVar5;
      uStack_130 = *(undefined4 *)(puVar5 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_138);
    }
    else {
      puVar5 = (undefined8 *)*local_40;
      if (puVar5 != &local_118) goto LAB_140308443;
    }
    local_88 = &local_118;
    local_138 = CONCAT44(uRam0000000141dcfa3c,_DAT_141dcfa38);
    uStack_130 = uRam0000000141dcfa40;
    uStack_12c = DAT_141dcfa44;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_138);
    local_80 = &local_108;
    local_138 = CONCAT44(uRam00000001419e3e44,_DAT_1419e3e40);
    uStack_130 = uRam00000001419e3e48;
    uStack_12c = uRam00000001419e3e4c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_138);
    local_78 = &local_f8;
    local_138 = CONCAT44(uRam0000000141dcfa4c,_DAT_141dcfa48);
    uStack_130 = uRam0000000141dcfa50;
    uStack_12c = DAT_141dcfa54;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_138);
    local_70 = local_e8;
    ppuVar13 = &local_90;
    FUN_14008e020(param_1,param_2,&local_148,5,ppuVar13);
  }
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
  }
  uStack_12c = 0;
  local_138 = 0;
  iVar3 = FUN_140e851f0(puVar5,&local_138,DAT_141955260,1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_1403086d8;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  local_a0 = _DAT_141dcfa68;
  uStack_9c = uRam0000000141dcfa6c;
  uStack_98 = uRam0000000141dcfa70;
  uStack_94 = DAT_141dcfa74;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_a0);
  local_90 = &local_128;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14030863d:
    local_a0 = *(undefined4 *)puVar5;
    uStack_9c = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_98 = *(undefined4 *)(puVar5 + 1);
    uStack_94 = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_a0);
  }
  else {
    puVar5 = (undefined8 *)*local_40;
    if (puVar5 != &local_118) goto LAB_14030863d;
  }
  local_88 = &local_118;
  local_a0 = _DAT_141dcfa28;
  uStack_9c = uRam0000000141dcfa2c;
  uStack_98 = uRam0000000141dcfa30;
  uStack_94 = DAT_141dcfa34;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_a0);
  local_80 = &local_108;
  ppuVar13 = &local_90;
  FUN_14008e020(param_1,param_2,&local_148,3,ppuVar13);
LAB_1403086d8:
  local_b8 = 0xd;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  plVar7 = (longlong *)(**(code **)(*DAT_141dde028 + 8))(DAT_141dde028,DAT_141a026b8);
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
  }
  iVar3 = FUN_140e4a740(puVar5);
  if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar8 = plVar7;
  }
  FUN_140e87440(plVar8,DAT_1419fec38,0x80000000,&local_58,(ulonglong)ppuVar13 & 0xffffffffffffff00,
                (ulonglong)ppuVar14 & 0xffffffffffffff00);
  local_a0 = (undefined4)DAT_1419df7b0;
  uStack_9c = DAT_1419df7b0._4_4_;
  uStack_98 = DAT_1419df7b8;
  uStack_94 = DAT_1419df7bc;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_a0);
  local_90 = &local_128;
  if (0 < (int)local_48[0]) {
    puVar9 = (undefined8 *)*local_40;
  }
  iVar3 = FUN_140e4a740(puVar9);
  if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  uVar6 = FUN_140069500(plVar7);
  FUN_140e63610(uVar6,param_2,&local_148,1,&local_58,&local_90);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,5,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar9 = local_40;
    do {
      puVar5 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

