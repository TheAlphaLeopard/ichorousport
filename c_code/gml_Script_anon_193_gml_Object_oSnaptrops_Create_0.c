// gml_Script_anon_193_gml_Object_oSnaptrops_Create_0 @ 0x140d8d190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_193_gml_Object_oSnaptrops_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar7;
  ulonglong uVar6;
  undefined8 **ppuVar8;
  ulonglong uVar9;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_34;
  
  local_b0 = "gml_Object_oSmoke_Step_0";
  local_a8 = 0;
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_f8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_34 = 0xffffff;
  local_40 = 0;
  local_44 = 0xffffff;
  local_50 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_a8 = 2;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_110 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
    local_118 = (longlong *)*puVar2;
  }
  else {
    FUN_1400419b0(&local_118,puVar2);
  }
  FUN_140042560(&local_118,uVar1);
  FUN_1400460e0(puVar3,&local_118);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_a8 = 5;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if (puVar2 != &local_f8) {
    local_118 = (longlong *)*puVar2;
    uStack_110 = *(undefined4 *)(puVar2 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_118);
  }
  local_78 = &local_f8;
  local_118 = (longlong *)CONCAT44(uRam0000000141dc7734,_DAT_141dc7730);
  uStack_110 = uRam0000000141dc7738;
  uStack_10c = uRam0000000141dc773c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_118);
  local_70 = local_e8;
  local_118 = (longlong *)CONCAT44(uRam00000001419ede24,_DAT_1419ede20);
  uStack_110 = uRam00000001419ede28;
  uStack_10c = uRam00000001419ede2c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_118);
  local_68 = &local_d8;
  FUN_140e609c0(param_1);
  uVar1 = CONCAT44(uVar7,DAT_141a00c58);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_108,3,uVar1,&local_78);
  uVar7 = (undefined4)((ulonglong)uVar1 >> 0x20);
  if (puVar5 != puVar4) {
    local_118 = (longlong *)*puVar5;
    uStack_110 = *(undefined4 *)(puVar5 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_118);
  }
  FUN_140e60910(1);
  local_a8 = 6;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  if (puVar4 != &local_f8) {
    local_118 = (longlong *)*puVar4;
    uStack_110 = *(undefined4 *)(puVar4 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_118);
  }
  local_78 = &local_f8;
  local_118 = (longlong *)CONCAT44(uRam0000000141dc7734,_DAT_141dc7730);
  uStack_110 = uRam0000000141dc7738;
  uStack_10c = uRam0000000141dc773c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_118);
  local_70 = local_e8;
  local_118 = (longlong *)CONCAT44(uRam00000001419ede24,_DAT_1419ede20);
  uStack_110 = uRam00000001419ede28;
  uStack_10c = uRam00000001419ede2c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_118);
  local_68 = &local_d8;
  FUN_140e609c0(param_1);
  ppuVar8 = &local_78;
  uVar6 = CONCAT44(uVar7,DAT_141a00c58);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_108,3,uVar6,ppuVar8);
  if (puVar5 != puVar3) {
    local_118 = (longlong *)*puVar5;
    uStack_110 = *(undefined4 *)(puVar5 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_118);
  }
  FUN_140e60910(1);
  local_a8 = 8;
  uStack_10c = 6;
  uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_40,uVar6,uVar9);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_1400460e0(&local_40,puVar2);
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_40);
  local_a8 = 9;
  uStack_10c = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe158,0x80000000,&local_50,uVar6,uVar9);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_1400460e0(&local_50,puVar4);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_50);
  local_a8 = 0xb;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a450b8);
  uStack_10c = 6;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_141a0f7f8,0x80000000,&local_88,uVar6,uVar9 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar6 >> 0x20);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = (longlong *)local_88;
  uStack_110 = uStack_80;
  uStack_10c = uStack_7c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_118);
  local_78 = &local_f8;
  local_118 = (longlong *)CONCAT44(uRam0000000141dc7734,_DAT_141dc7730);
  uStack_110 = uRam0000000141dc7738;
  uStack_10c = uRam0000000141dc773c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_118);
  local_70 = local_e8;
  if (puVar2 != &local_d8) {
    local_118 = (longlong *)*puVar2;
    uStack_110 = *(undefined4 *)(puVar2 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_118);
  }
  local_68 = &local_d8;
  ppuVar8 = &local_78;
  uVar6 = CONCAT44(uVar7,DAT_141a00c58);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_108,3,uVar6,ppuVar8);
  if (puVar2 != &local_c8) {
    local_118 = (longlong *)*puVar2;
    uStack_110 = *(undefined4 *)(puVar2 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_118);
  }
  FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_c8);
  local_a8 = 0xc;
  uStack_10c = 6;
  uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_141a0f7f8,0x80000000,&local_88,uVar6,uVar9);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = (longlong *)local_88;
  uStack_110 = uStack_80;
  uStack_10c = uStack_7c;
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  FUN_140041b80(&local_a0,&local_118);
  FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_a0);
  local_a8 = 0xe;
  uStack_10c = 6;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_141a0a778,0x80000000,&local_60,uVar6 & 0xffffffffffffff00,
                uVar9 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140162d40(&local_60,5);
  FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_60);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  if ((1 << ((byte)local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_40);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return;
}

