// gml_Object_oFadeParticle_Step_0 @ 0x140acc6d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oFadeParticle_Step_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong **pplVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  code *pcVar13;
  ulonglong uVar14;
  undefined8 **ppuVar15;
  ulonglong in_stack_fffffffffffffe60;
  ulonglong uVar16;
  undefined8 local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  longlong *local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  longlong *local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 local_150;
  uint local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  
  local_130 = "gml_Object_oEyeProjectile_Step_0";
  local_128 = 0;
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  pcVar13 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_f8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = (longlong *)0x0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_128 = 4;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe9a8);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2a58);
  uStack_17c = 6;
  uVar14 = (ulonglong)pcVar13 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_108,uVar14,
                in_stack_fffffffffffffe60 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar14 >> 0x20);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_16c = *(uint *)((longlong)puVar4 + 0xc);
  uStack_170 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
    local_178 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_178,puVar4);
  }
  FUN_1400462a0(&local_178,&local_108);
  if ((uStack_16c & 0xffffff) == 0) {
    uVar11 = SUB84(local_178,0);
  }
  else {
    uVar11 = FUN_140e4b060(&local_178);
  }
  uVar9 = FUN_140e78d00(uVar11);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = uVar9;
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_128 = 6;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe988);
  pplVar6 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  local_198 = (longlong *)CONCAT44(uRam0000000141dc7024,_DAT_141dc7020);
  uStack_190 = uRam0000000141dc7028;
  uStack_18c = uRam0000000141dc702c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_198);
  local_78 = &local_f8;
  FUN_140e609c0(param_1);
  ppuVar15 = &local_78;
  uVar14 = CONCAT44(uVar12,DAT_141a0a0d8);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,1,uVar14,ppuVar15);
  uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_180 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
    local_188 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_188,puVar5);
  }
  uStack_18c = 0;
  local_198 = (longlong *)0x3fe8000000000000;
  FUN_140042560(&local_188,&local_198);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_170 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
    local_178 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_178,puVar4);
  }
  FUN_140046500(&local_178,&local_188);
  if (&local_178 != pplVar6) {
    local_198 = local_178;
    uStack_190 = uStack_170;
    uStack_18c = uStack_16c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar6);
    }
    FUN_140041b80(pplVar6,&local_198);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140e60910(1);
  local_128 = 8;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  uStack_18c = 6;
  uVar16 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
  local_198 = param_1;
  FUN_140e87440(&local_198,DAT_1419fe0e8,0x80000000,&local_98,uVar14 & 0xffffffffffffff00,uVar16);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_170 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
    local_178 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_178,puVar5);
  }
  FUN_140042560(&local_178,puVar7);
  uStack_17c = uStack_16c;
  uStack_180 = uStack_170;
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
    local_188 = local_178;
  }
  else {
    FUN_1400419b0(&local_188,&local_178);
  }
  FUN_140042560(&local_188,uVar3);
  FUN_1400460e0(&local_98,&local_188);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_98);
  local_128 = 9;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2a78);
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2a58);
  if (puVar5 != &local_f8) {
    local_198 = (longlong *)*puVar5;
    uStack_190 = *(undefined4 *)(puVar5 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_198);
  }
  local_78 = &local_f8;
  uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_180 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
    local_188 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_188,puVar5);
  }
  uStack_18c = 7;
  local_198 = (longlong *)CONCAT44(local_198._4_4_,0x30);
  FUN_1400462a0(&local_188,&local_198);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = local_188;
  uStack_190 = uStack_180;
  uStack_18c = uStack_17c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_198);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_70 = local_e8;
  local_198 = (longlong *)CONCAT44(uRam00000001419eb434,_DAT_1419eb430);
  uStack_190 = uRam00000001419eb438;
  uStack_18c = uRam00000001419eb43c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_198);
  local_68 = local_d8;
  uStack_17c = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_180 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
    local_188 = (longlong *)*puVar8;
  }
  else {
    FUN_1400419b0(&local_188,puVar8);
  }
  FUN_140046500(&local_188,puVar4);
  local_198 = local_188;
  uStack_190 = uStack_180;
  uStack_18c = uStack_17c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_198);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_198 = (longlong *)CONCAT44(uRam00000001419eb444,_DAT_1419eb440);
  uStack_190 = uRam00000001419eb448;
  uStack_18c = uRam00000001419eb44c;
  local_60 = local_c8;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_198);
  local_58 = local_b8;
  ppuVar15 = &local_78;
  puVar4 = (undefined8 *)gml_Script_arm_apply_force(param_1,param_2,&local_168,5,ppuVar15);
  if (puVar4 == &local_a8) {
    bVar10 = 0xff;
  }
  else {
    local_198 = (longlong *)*puVar4;
    uStack_190 = *(undefined4 *)(puVar4 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar4 + 0xc);
    FUN_140041b80(&local_a8,&local_198);
    bVar10 = (byte)uStack_9c;
  }
  local_128 = 10;
  local_198 = (longlong *)local_a8;
  uStack_190 = uStack_a0;
  uStack_18c = uStack_9c;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_198);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_148);
  local_128 = 0xc;
  uStack_18c = 6;
  uVar16 = uVar16 & 0xffffffffffffff00;
  uVar14 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
  local_198 = param_1;
  FUN_140e87440(&local_198,DAT_1419fe158,0x80000000,&local_158,uVar14,uVar16);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_18c = 6;
  uVar16 = uVar16 & 0xffffffffffffff00;
  uVar14 = uVar14 & 0xffffffffffffff00;
  local_198 = param_1;
  FUN_140e87440(&local_198,DAT_1419fdd18,0x80000000,&local_88,uVar14,uVar16);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_16c = local_14c;
  uStack_170 = local_150;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
    local_178 = local_158;
  }
  else {
    FUN_1400419b0(&local_178,&local_158);
  }
  FUN_1400462a0(&local_178,&local_88);
  if ((uStack_16c & 0xffffff) == 0) {
    uVar12 = SUB84(local_178,0);
  }
  else {
    uVar12 = FUN_140e4b060(&local_178);
  }
  uVar9 = FUN_140e78d00(uVar12);
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  local_114 = 0;
  local_120 = uVar9;
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_120);
  local_128 = 0xf;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uStack_18c = 6;
  uVar16 = uVar16 & 0xffffffffffffff00;
  uVar14 = uVar14 & 0xffffffffffffff00;
  local_198 = param_1;
  FUN_140e87440(&local_198,DAT_1419fe0e8,0x80000000,&local_108,uVar14,uVar16);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_18c = 6;
  uVar14 = uVar14 & 0xffffffffffffff00;
  local_198 = param_1;
  FUN_140e87440(&local_198,DAT_1419fe158,0x80000000,&local_158,uVar14,uVar16 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar14 >> 0x20);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = (longlong *)local_108;
  uStack_190 = uStack_100;
  uStack_18c = uStack_fc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_198);
  local_78 = &local_f8;
  uStack_17c = local_14c;
  uStack_180 = local_150;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
    local_188 = local_158;
  }
  else {
    FUN_1400419b0(&local_188,&local_158);
  }
  uStack_18c = 7;
  local_198 = (longlong *)CONCAT44(local_198._4_4_,5);
  FUN_1400460e0(&local_188,&local_198);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = local_188;
  uStack_190 = uStack_180;
  uStack_18c = uStack_17c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_198);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_70 = local_e8;
  uStack_18c = 0xf;
  local_198 = (longlong *)0x100000000000149;
  local_188 = (longlong *)0x100000000000149;
  uStack_180 = uStack_190;
  uStack_17c = 0xf;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_188);
  local_68 = local_d8;
  uVar9 = FUN_140e634e0(param_1,param_2,&local_168,3,CONCAT44(uVar12,DAT_141a12628),&local_78);
  cVar1 = FUN_140e491e0(uVar9);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 8))(param_1,DAT_1419fe988);
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
    uStack_18c = 0;
    local_198 = (longlong *)0x4034000000000000;
    uVar2 = FUN_140e851f0(uVar9,&local_198,DAT_141955260,1);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    if (uVar2 < 0x80000000) {
      local_128 = 0x11;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419feaa8);
      if (puVar4 != &local_148) {
        local_198 = (longlong *)*puVar4;
        uStack_190 = *(undefined4 *)(puVar4 + 1);
        uStack_18c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_198);
      }
      FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_148);
      local_128 = 0x12;
      FUN_140edd0e0(param_1,param_2,0,0);
    }
  }
  local_128 = 0x17;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a01b58);
  uVar9 = FUN_140e63610(param_1,param_2,&local_168,0,uVar9,0);
  cVar1 = FUN_140e491e0(uVar9);
  if (cVar1 != '\0') {
    local_128 = 0x19;
    FUN_140edd0e0(param_1,param_2,0,0);
  }
  local_128 = 0x1d;
  uVar9 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  FUN_140e609c0(param_1);
  FUN_1400460e0(uVar9,uVar3);
  FUN_140e60910(1);
  local_128 = 0x1f;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  FUN_140e609c0(param_1);
  if (puVar7 != puVar4) {
    local_198 = (longlong *)*puVar7;
    uStack_190 = *(undefined4 *)(puVar7 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << (bVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return;
}

