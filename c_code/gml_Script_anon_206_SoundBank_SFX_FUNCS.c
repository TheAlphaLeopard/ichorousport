// gml_Script_anon_206_SoundBank_SFX_FUNCS @ 0x14049eec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_206_SoundBank_SFX_FUNCS
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
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
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [16];
  undefined8 local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  local_d0 = "gml_Script_seg_set_length";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 4;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_a8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_fc = 0;
  local_108 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 6;
  puVar11 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar9 = &DAT_1419df7b0;
LAB_14049efb6:
    local_178 = *puVar9;
    uStack_170 = *(undefined4 *)(puVar9 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar9 + 0xc);
    FUN_140041b80(&local_148,&local_178);
  }
  else {
    puVar9 = (undefined8 *)*param_5;
    if (puVar9 != &local_148) goto LAB_14049efb6;
  }
  if ((param_4 < 2) || (puVar11 = (undefined8 *)param_5[1], puVar11 != &local_158)) {
    local_178 = *puVar11;
    uStack_170 = *(undefined4 *)(puVar11 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar11 + 0xc);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_178);
  }
  local_c8 = 7;
  uStack_16c = 0;
  local_178 = 0;
  iVar4 = FUN_140e851f0(&local_148,&local_178,DAT_141955260,1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (iVar4 == -2 || -1 < iVar4) {
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    iVar4 = FUN_140e851f0(&local_148,uVar6,DAT_141955260,1);
    if ((iVar4 == -2) || (iVar4 < 1)) goto LAB_14049f446;
  }
  local_c8 = 7;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
  local_68 = &local_148;
  if (puVar11 != &local_98) {
    local_178 = *puVar11;
    uStack_170 = *(undefined4 *)(puVar11 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar11 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_178);
  }
  local_60 = &local_98;
  uStack_16c = DAT_141dd3904;
  uStack_170 = DAT_141dd3900;
  if ((1 << ((byte)DAT_141dd3904 & 0x1f) & 0x46U) == 0) {
    local_178 = DAT_141dd38f8;
  }
  else {
    FUN_1400419b0(&local_178,&DAT_141dd38f8);
  }
  local_dc = DAT_141dd38f4;
  local_e0 = DAT_141dd38f0;
  if ((1 << ((byte)DAT_141dd38f4 & 0x1f) & 0x46U) == 0) {
    local_e8 = DAT_141dd38e8;
  }
  else {
    FUN_1400419b0(&local_e8,&DAT_141dd38e8);
  }
  uVar3 = local_dc;
  uVar2 = local_e0;
  uVar6 = local_e8;
  uVar12 = CONCAT44(uVar5,DAT_1419fcb18);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_108,1,uVar12,&local_68);
  uVar5 = (undefined4)((ulonglong)uVar12 >> 0x20);
  uVar10 = 1 << ((byte)uVar3 & 0x1f) & 0x46;
  local_120 = uVar2;
  local_11c = uVar3;
  if (uVar10 == 0) {
    local_128 = uVar6;
  }
  else {
    FUN_1400419b0(&local_128,&local_e8);
  }
  FUN_1400460e0(&local_128,uVar7);
  local_12c = local_11c;
  local_130 = local_120;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
    local_138 = local_128;
  }
  else {
    FUN_1400419b0(&local_138,&local_128);
  }
  FUN_1400460e0(&local_138,&local_178);
  uVar7 = CONCAT44(uVar5,DAT_1419fcb18);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_118,1,uVar7,&local_60);
  uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_15c = local_12c;
  uStack_160 = local_130;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
    local_168 = local_138;
  }
  else {
    FUN_1400419b0(&local_168,&local_138);
  }
  FUN_1400460e0(&local_168,uVar6);
  local_b8 = (undefined4)local_168;
  uStack_b4 = local_168._4_4_;
  uStack_b0 = uStack_160;
  uStack_ac = uStack_15c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (uVar10 != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_58 = local_88;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_50 = local_78;
  FUN_140e634e0(param_1,param_2,&local_f8,2,CONCAT44(uVar5,DAT_141a010a8),&local_58);
LAB_14049f446:
  local_c8 = 8;
  plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a10a28);
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a10b88);
  iVar4 = FUN_140e4a740(&local_148);
  if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  uStack_15c = local_14c;
  uStack_160 = local_150;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
    local_168 = local_158;
  }
  else {
    FUN_1400419b0(&local_168,&local_158);
  }
  FUN_1400462a0(&local_168,plVar8);
  FUN_1400460e0(uVar6,&local_168);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_c8 = 9;
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a10a28);
  FUN_140e609c0(param_1);
  uVar5 = FUN_140e4a740(&local_158);
  puVar9 = (undefined8 *)FUN_140e48e40(puVar11,uVar5);
  FUN_140e609c0(*(undefined8 *)*puVar11);
  if (&local_148 != puVar9) {
    local_b8 = (undefined4)local_148;
    uStack_b4 = local_148._4_4_;
    uStack_b0 = uStack_140;
    uStack_ac = uStack_13c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_b8);
  }
  FUN_140e60910(2);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

