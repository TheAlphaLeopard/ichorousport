// gml_Script_anon_11161_DefineTrinkets_TRINKETSINIT @ 0x1405ebc80

undefined8 *
gml_Script_anon_11161_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar7;
  ulonglong uVar8;
  ulonglong in_stack_fffffffffffffeb0;
  undefined1 **ppuVar9;
  ulonglong uVar10;
  longlong *local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_58 [16];
  longlong local_48;
  
  local_110 = "gml_Script_anon@10573@DefineTrinkets@TRINKETSINIT";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x194;
  pcVar7 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_98,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_cc = 0xffffff;
  local_d8 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x196;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*param_5;
  }
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
  uVar5 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_140e87440(puVar6,DAT_141a1f440,0x80000000,&local_a8,uVar5,in_stack_fffffffffffffeb0);
  local_f8 = local_a8;
  uStack_f0 = uStack_a0;
  uStack_ec = uStack_9c;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_f8);
  local_108 = 0x198;
  ppuVar9 = (undefined1 **)(in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
  uVar5 = uVar5 & 0xffffffffffffff00;
  FUN_140e87440(&local_128,DAT_141a57c50,0x80000000,&local_b8,uVar5,ppuVar9);
  local_13c = 10;
  local_148 = (longlong *)0x2;
  iVar2 = FUN_140e851f0(&local_b8,&local_148,DAT_141955260,0);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (iVar2 == 0) {
    local_108 = 0x19a;
    local_13c = 0xf;
    local_148 = (longlong *)0x10000000000009d;
    iVar2 = FUN_140e63cb0(local_58,&local_res8,&local_res10,&local_148);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    if (0 < iVar2) {
      do {
        local_108 = 0x19c;
        local_13c = 6;
        local_148 = local_res8;
        ppuVar9 = (undefined1 **)((ulonglong)ppuVar9 & 0xffffffffffffff00);
        uVar8 = uVar5 & 0xffffffffffffff00;
        FUN_140e87440(&local_148,DAT_141a0a828,0x80000000,&local_c8,uVar8,ppuVar9);
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        iVar2 = FUN_140e851f0(&local_c8,&local_128,DAT_141955260,0);
        uVar5 = uVar8;
        if (iVar2 == 0) {
LAB_1405ec0db:
          local_108 = 0x19c;
        }
        else {
          uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56cd0);
          uStack_ec = 10;
          local_f8 = 0;
          iVar2 = FUN_140e851f0(uVar4,&local_f8,DAT_141955260,0);
          if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          uVar5 = uVar8;
          if (iVar2 != 0) goto LAB_1405ec0db;
          local_108 = 0x19e;
          if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          local_138 = 0;
          local_130 = 0;
          local_12c = 5;
          uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1edd0);
          uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
          uVar8 = uVar8 & 0xffffffffffffff00;
          FUN_140e87440(uVar3,DAT_1419f5f58,0x80000000,&local_d8,uVar8,uVar10);
          if (param_4 < 1) {
            puVar6 = &DAT_1419df7b0;
          }
          else {
            puVar6 = (undefined8 *)*param_5;
          }
          FUN_140e87440(puVar6,DAT_141a1f4e0,0x80000000,&local_e8,uVar8 & 0xffffffffffffff00,
                        uVar10 & 0xffffffffffffff00);
          local_78 = (undefined4)local_d8;
          uStack_74 = local_d8._4_4_;
          uStack_70 = uStack_d0;
          uStack_6c = uStack_cc;
          if ((1 << (local_98[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_98);
          }
          FUN_140041b80(local_98,&local_78);
          local_68 = local_98;
          local_78 = (undefined4)local_e8;
          uStack_74 = local_e8._4_4_;
          uStack_70 = uStack_e0;
          uStack_6c = uStack_dc;
          if ((1 << (local_88[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_88);
          }
          FUN_140041b80(local_88,&local_78);
          local_60 = local_88;
          ppuVar9 = &local_68;
          FUN_140e63610(local_res8,local_res10,&local_138,2,uVar5,ppuVar9);
        }
        cVar1 = FUN_140e643f0(local_58,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_58,&local_res8,&local_res10);
    if (local_48 != 0) {
      FUN_140e4cd60();
    }
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

