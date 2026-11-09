// gml_Script_InputTriggerEffectGetState @ 0x140368ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputTriggerEffectGetState
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
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  undefined8 **ppuVar12;
  ulonglong in_stack_fffffffffffffeb0;
  undefined8 **ppuVar13;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
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
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_a0 = "gml_Script_InputTriggerEffectGetPause";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 7;
  FUN_140041df0(local_48,param_4,1,param_5);
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_4c = 0xffffff;
  local_58 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_12c = 0;
  local_138 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde738) &&
     (_Init_thread_header(&DAT_141dde738), DAT_141dde738 == -1)) {
    DAT_141dde730 = (longlong *)FUN_140e63aa0(DAT_1419f37f8);
    _Init_thread_footer(&DAT_141dde738);
  }
  local_98 = 7;
  puVar8 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_98 = 7;
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
  if (DAT_141ddc139 == '\0') {
    FUN_140e64380(DAT_141dde730,"gml_Script_InputTriggerEffectGetPause");
    FUN_140e64380(param_1,"gml_Script_InputTriggerEffectGetPause");
  }
  local_98 = 9;
  if (DAT_141ddc139 == '\0') {
    DAT_141ddc139 = '\x01';
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde730 + 0x10))(DAT_141dde730,DAT_141a026b8);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    uVar11 = 0;
    uVar6 = gml_Script___InputVerbGroupsConfig(param_1,param_2,&local_138,0,0);
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419fed38,0x80000000,&local_58,uVar11,
                  in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
    uVar10 = (undefined4)(uVar11 >> 0x20);
    FUN_140e609c0(DAT_141dde730);
    if (&local_58 != puVar5) {
      local_148 = local_58;
      uStack_140 = uStack_50;
      uStack_13c = uStack_4c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_148);
    }
    FUN_140e60910(1);
  }
  local_98 = 7;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_140368ea6:
    local_148 = *puVar5;
    uStack_140 = *(undefined4 *)(puVar5 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
  }
  else {
    puVar5 = (undefined8 *)*local_40;
    if (puVar5 != &local_128) goto LAB_140368ea6;
  }
  local_90 = &local_128;
  ppuVar13 = &local_90;
  ppuVar12 = (undefined8 **)CONCAT44(uVar10,DAT_141a014a8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_138,1,ppuVar12,ppuVar13);
  cVar2 = FUN_140e491e0(uVar6);
  uVar10 = 0;
  if (cVar2 == '\0') {
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    uVar10 = (undefined4)((ulonglong)ppuVar12 >> 0x20);
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if ((int)local_48[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_140368f68:
      local_148 = *puVar5;
      uStack_140 = *(undefined4 *)(puVar5 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_148);
    }
    else {
      puVar5 = (undefined8 *)*local_40;
      if (puVar5 != &local_118) goto LAB_140368f68;
    }
    local_88 = &local_118;
    local_148 = CONCAT44(uRam0000000141dd171c,_DAT_141dd1718);
    uStack_140 = uRam0000000141dd1720;
    uStack_13c = DAT_141dd1724;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
    local_80 = &local_108;
    ppuVar13 = &local_88;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar10,DAT_1419fdc58),ppuVar13);
    if (puVar5 != &local_f8) {
      local_148 = *puVar5;
      uStack_140 = *(undefined4 *)(puVar5 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_148);
    }
    local_78 = &local_f8;
    local_148 = CONCAT44(uRam0000000141dd174c,_DAT_141dd1748);
    uStack_140 = uRam0000000141dd1750;
    uStack_13c = DAT_141dd1754;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
    local_70 = local_e8;
    ppuVar12 = &local_80;
    FUN_14008e020(param_1,param_2,&local_c8,3,ppuVar12);
    uVar10 = local_bc;
  }
  local_98 = 0x10;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
  }
  uStack_13c = 0;
  local_148 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar5,&local_148,DAT_141955260,1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (uVar4 < 0x80000000) {
    local_98 = 0x10;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    local_148 = CONCAT44(uRam0000000141dd173c,_DAT_141dd1738);
    uStack_140 = uRam0000000141dd1740;
    uStack_13c = DAT_141dd1744;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
    local_90 = &local_128;
    if ((int)local_48[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_1403691a6:
      local_148 = *puVar5;
      uStack_140 = *(undefined4 *)(puVar5 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_148);
    }
    else {
      puVar5 = (undefined8 *)*local_40;
      if (puVar5 != &local_118) goto LAB_1403691a6;
    }
    local_88 = &local_118;
    local_148 = CONCAT44(uRam0000000141dd170c,_DAT_141dd1708);
    uStack_140 = uRam0000000141dd1710;
    uStack_13c = DAT_141dd1714;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
    local_80 = &local_108;
    local_148 = CONCAT44(uRam00000001419e4474,_DAT_1419e4470);
    uStack_140 = uRam00000001419e4478;
    uStack_13c = uRam00000001419e447c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
    local_78 = &local_f8;
    local_148 = CONCAT44(uRam0000000141dd16fc,_DAT_141dd16f8);
    uStack_140 = uRam0000000141dd1700;
    uStack_13c = DAT_141dd1704;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
    local_70 = local_e8;
    ppuVar12 = &local_90;
    FUN_14008e020(param_1,param_2,&local_138,5,ppuVar12);
  }
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
  }
  uStack_13c = 0;
  local_148 = 0;
  iVar3 = FUN_140e851f0(puVar5,&local_148,DAT_141955260,1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_14036943d;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  local_b8 = _DAT_141dd1738;
  uStack_b4 = uRam0000000141dd173c;
  uStack_b0 = uRam0000000141dd1740;
  uStack_ac = DAT_141dd1744;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_b8);
  local_90 = &local_128;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1403693a6:
    local_b8 = *(undefined4 *)puVar5;
    uStack_b4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_b0 = *(undefined4 *)(puVar5 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_b8);
  }
  else {
    puVar5 = (undefined8 *)*local_40;
    if (puVar5 != &local_118) goto LAB_1403693a6;
  }
  local_88 = &local_118;
  local_b8 = _DAT_141dd1728;
  uStack_b4 = uRam0000000141dd172c;
  uStack_b0 = uRam0000000141dd1730;
  uStack_ac = DAT_141dd1734;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_b8);
  local_80 = &local_108;
  ppuVar12 = &local_90;
  FUN_14008e020(param_1,param_2,&local_138,3,ppuVar12);
LAB_14036943d:
  local_98 = 0xd;
  plVar7 = (longlong *)(**(code **)(*DAT_141dde730 + 8))(DAT_141dde730,DAT_141a026b8);
  if (0 < (int)local_48[0]) {
    puVar8 = (undefined8 *)*local_40;
  }
  iVar3 = FUN_140e4a740(puVar8);
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
  FUN_140e87440(plVar7,DAT_141a03d88,0x80000000,&local_68,(ulonglong)ppuVar12 & 0xffffffffffffff00,
                (ulonglong)ppuVar13 & 0xffffffffffffff00);
  if (&local_68 != param_3) {
    local_b8 = (undefined4)local_68;
    uStack_b4 = local_68._4_4_;
    uStack_b0 = uStack_60;
    uStack_ac = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_b8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,5,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar8 = local_40;
    do {
      puVar5 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

