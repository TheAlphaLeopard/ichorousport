// gml_Script_modulo_anon_2039_vec2_Vect2 @ 0x140636f30

ulonglong *
gml_Script_modulo_anon_2039_vec2_Vect2
          (ulonglong param_1,ulonglong param_2,ulonglong *param_3,int param_4,undefined8 *param_5)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 uVar4;
  ulonglong uVar3;
  undefined1 **ppuVar5;
  ulonglong uVar6;
  ulonglong local_f8;
  uint uStack_f0;
  undefined4 uStack_ec;
  uint local_e8 [3];
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined1 local_60 [16];
  undefined1 local_50 [12];
  byte local_44;
  uint local_40 [3];
  byte local_34;
  undefined1 *local_28;
  uint *local_20;
  
  ppuVar5 = &local_28;
  local_80 = "gml_Script_subtract@anon@1566@vec2@Vect2";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x3d;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_60,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_64 = 0;
  local_70 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x40;
  local_98 = DAT_141a00978 & 0xffffff;
  uStack_94 = (int)(DAT_141a00978 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_94 == 0xf) {
    uStack_94 = 0x4000004;
  }
  else {
    uStack_94 = uStack_94 | 0x1000000;
  }
  uStack_ec = 0xf;
  local_f8 = CONCAT44(uStack_94,DAT_141a00978) & 0xffffffff00ffffff;
  uStack_90 = uStack_f0;
  uStack_8c = 0xf;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_98);
  local_28 = local_50;
  if (param_4 < 1) {
    puVar1 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar1 = (uint *)*param_5;
    if (puVar1 == local_40) goto LAB_1406370d0;
  }
  local_98 = *puVar1;
  uStack_94 = puVar1[1];
  uStack_90 = puVar1[2];
  uStack_8c = puVar1[3];
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_98);
LAB_1406370d0:
  local_20 = local_40;
  uVar3 = CONCAT44(uVar4,DAT_1419fd6d8);
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_70,2,uVar3,ppuVar5);
  if (puVar1 != local_e8) {
    local_98 = *puVar1;
    uStack_94 = puVar1[1];
    uStack_90 = puVar1[2];
    uStack_8c = puVar1[3];
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_98);
  }
  local_78 = 0x41;
  uStack_ec = 6;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_1419fe0e8,0x80000000,&local_c8,uVar3 & 0xffffffffffffff00,
                (ulonglong)ppuVar5 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  uVar3 = param_1;
  uVar6 = param_2;
  FUN_140e87170(local_e8,DAT_1419fe0e8,0x80000000,&local_a8,param_1,param_2);
  FUN_1400462a0(&local_c8,&local_a8);
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_c8);
  local_78 = 0x42;
  uStack_ec = 6;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_1419fe158,0x80000000,&local_d8,uVar3 & 0xffffffffffffff00,
                uVar6 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140e87170(local_e8,DAT_1419fe158,0x80000000,&local_b8,param_1,param_2);
  FUN_1400462a0(&local_d8,&local_b8);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_d8);
  local_78 = 0x43;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar2 = FUN_140e5c910();
  FUN_140e42c10(uVar2,param_1);
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

