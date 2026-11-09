// gml_Script_seg_set_length @ 0x14049e520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_seg_set_length
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  uint uVar11;
  undefined4 uVar13;
  undefined8 uVar12;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  longlong local_b8;
  byte local_ac;
  longlong local_a8;
  byte local_9c;
  longlong local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  
  local_70 = "gml_Script_seg_meeting";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 4;
  uVar13 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_12c = 0xffffff;
  local_138 = 0;
  local_16c = 0;
  local_178 = 0;
  local_15c = 0;
  local_168 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 6;
  plVar10 = &DAT_1419df7b0;
  if (param_4 < 1) {
    plVar7 = &DAT_1419df7b0;
LAB_14049e612:
    local_158 = *plVar7;
    uStack_150 = (undefined4)plVar7[1];
    uStack_14c = *(undefined4 *)((longlong)plVar7 + 0xc);
    FUN_140041b80(&local_138,&local_158);
  }
  else {
    plVar7 = (longlong *)*param_5;
    if (plVar7 != &local_138) goto LAB_14049e612;
  }
  local_68 = 7;
  uStack_14c = 0;
  local_158 = 0;
  iVar5 = FUN_140e851f0(&local_138,&local_158,DAT_141955260,1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (iVar5 == -2 || -1 < iVar5) {
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    iVar5 = FUN_140e851f0(&local_138,uVar6,DAT_141955260,1);
    if ((iVar5 == -2) || (iVar5 < 1)) goto LAB_14049ea70;
  }
  local_68 = 7;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
  local_d8 = &local_138;
  if (plVar7 != &local_a8) {
    local_158 = *plVar7;
    uStack_150 = (undefined4)plVar7[1];
    uStack_14c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_158);
  }
  uStack_14c = DAT_141dd38e4;
  uStack_150 = DAT_141dd38e0;
  if ((1 << ((byte)DAT_141dd38e4 & 0x1f) & 0x46U) == 0) {
    local_158 = DAT_141dd38d8;
    local_d0 = &local_a8;
  }
  else {
    local_d0 = &local_a8;
    FUN_1400419b0(&local_158,&DAT_141dd38d8);
  }
  local_ec = DAT_141dd38d4;
  local_f0 = DAT_141dd38d0;
  if ((1 << ((byte)DAT_141dd38d4 & 0x1f) & 0x46U) == 0) {
    local_f8 = DAT_141dd38c8;
  }
  else {
    FUN_1400419b0(&local_f8,&DAT_141dd38c8);
  }
  uVar3 = local_ec;
  uVar2 = local_f0;
  uVar6 = local_f8;
  uVar12 = CONCAT44(uVar13,DAT_1419fcb18);
  uVar8 = FUN_140e634e0(param_1,param_2,&local_168,1,uVar12,&local_d8);
  uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
  uVar11 = 1 << ((byte)uVar3 & 0x1f) & 0x46;
  local_110 = uVar2;
  local_10c = uVar3;
  if (uVar11 == 0) {
    local_118 = uVar6;
  }
  else {
    FUN_1400419b0(&local_118,&local_f8);
  }
  FUN_1400460e0(&local_118,uVar8);
  local_11c = local_10c;
  local_120 = local_110;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
    local_128 = local_118;
  }
  else {
    FUN_1400419b0(&local_128,&local_118);
  }
  FUN_1400460e0(&local_128,&local_158);
  uVar8 = CONCAT44(uVar13,DAT_1419fcb18);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_108,1,uVar8,&local_d0);
  uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_dc = local_11c;
  uStack_e0 = local_120;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
    local_e8 = local_128;
  }
  else {
    FUN_1400419b0(&local_e8,&local_128);
  }
  FUN_1400460e0(&local_e8,uVar6);
  local_148 = (undefined4)local_e8;
  uStack_144 = local_e8._4_4_;
  uStack_140 = uStack_e0;
  uStack_13c = uStack_dc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_148);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (uVar11 != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_c8 = &local_98;
  local_148 = _DAT_1419df7c0;
  uStack_144 = uRam00000001419df7c4;
  uStack_140 = uRam00000001419df7c8;
  uStack_13c = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_148);
  local_c0 = local_88;
  uVar6 = CONCAT44(uVar13,DAT_141a010a8);
  FUN_140e634e0(param_1,param_2,&local_178,2,uVar6,&local_c8);
  uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
LAB_14049ea70:
  local_68 = 8;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fba8);
  iVar5 = FUN_140e4a740(&local_138);
  if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
    if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar7 != &local_b8) {
    local_148 = (undefined4)*plVar7;
    uStack_144 = *(undefined4 *)((longlong)plVar7 + 4);
    uStack_140 = (undefined4)plVar7[1];
    uStack_13c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_148);
  }
  local_d8 = &local_b8;
  uVar6 = FUN_140e634e0(param_1,param_2,&local_178,1,CONCAT44(uVar13,DAT_141a04628),&local_d8);
  cVar4 = FUN_140e491e0(uVar6);
  if (cVar4 == '\0') {
    local_68 = 10;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    local_d8 = &local_138;
    if ((param_4 < 2) || (plVar10 = (longlong *)param_5[1], plVar10 != &local_a8)) {
      local_148 = (undefined4)*plVar10;
      uStack_144 = *(undefined4 *)((longlong)plVar10 + 4);
      uStack_140 = (undefined4)plVar10[1];
      uStack_13c = *(undefined4 *)((longlong)plVar10 + 0xc);
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_148);
    }
    local_d0 = &local_a8;
    puVar9 = (undefined8 *)gml_Script_seg_meeting_mask(param_1,param_2,&local_178,2,&local_d8);
  }
  else {
    local_68 = 9;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_d0 = &local_138;
    if ((param_4 < 2) || (plVar10 = (longlong *)param_5[1], plVar10 != &local_98)) {
      local_148 = (undefined4)*plVar10;
      uStack_144 = *(undefined4 *)((longlong)plVar10 + 4);
      uStack_140 = (undefined4)plVar10[1];
      uStack_13c = *(undefined4 *)((longlong)plVar10 + 0xc);
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_148);
    }
    local_c8 = &local_98;
    puVar9 = (undefined8 *)gml_Script_seg_meeting(param_1,param_2,&local_168,2,&local_d0);
  }
  if (puVar9 != param_3) {
    local_148 = *(undefined4 *)puVar9;
    uStack_144 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_140 = *(undefined4 *)(puVar9 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_148);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

