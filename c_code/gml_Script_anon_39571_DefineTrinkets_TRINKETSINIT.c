// gml_Script_anon_39571_DefineTrinkets_TRINKETSINIT @ 0x1406173e0

undefined8 *
gml_Script_anon_39571_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  code *pcVar4;
  ulonglong uVar5;
  undefined1 **in_stack_ffffffffffffff00;
  ulonglong uVar6;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined1 *local_70;
  undefined1 local_68 [16];
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_res18 = 0;
  local_a0 = "gml_Script_anon@39278@DefineTrinkets@TRINKETSINIT";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x576;
  pcVar4 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_b8,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x577;
  uStack_ec = 0xf;
  local_f8 = 0x10000000000009d;
  iVar2 = FUN_140e63cb0(local_68,&local_res8,&local_res10,&local_f8);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (0 < iVar2) {
    do {
      local_98 = 0x579;
      uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56cd0);
      local_84 = 10;
      local_90 = 2;
      iVar2 = FUN_140e851f0(uVar3,&local_90,DAT_141955260,0);
      if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_90);
      }
      if (iVar2 == 0) {
        local_98 = 0x579;
      }
      else {
        local_98 = 0x57a;
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        local_e8 = 0;
        local_e0 = 0;
        local_dc = 5;
        uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a572d0);
        uVar6 = (ulonglong)in_stack_ffffffffffffff00 & 0xffffffffffffff00;
        uVar5 = (ulonglong)pcVar4 & 0xffffffffffffff00;
        FUN_140e87440(uVar3,DAT_141a05098,0x80000000,&local_c8,uVar5,uVar6);
        FUN_140e87440(uVar3,DAT_1419f5fa8,0x80000000,&local_d8,uVar5 & 0xffffffffffffff00,
                      uVar6 & 0xffffffffffffff00);
        uStack_ec = local_cc;
        uStack_f0 = local_d0;
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
          local_f8 = local_d8;
        }
        else {
          FUN_1400419b0(&local_f8,&local_d8);
        }
        local_res18 = 1;
        local_74 = 0;
        local_80 = 0x3fd0000000000000;
        FUN_140042560(&local_f8,&local_80);
        if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_80);
        }
        local_48 = (undefined4)local_f8;
        uStack_44 = local_f8._4_4_;
        uStack_40 = uStack_f0;
        uStack_3c = uStack_ec;
        if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_48);
        local_res18 = 0;
        if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        local_70 = local_b8;
        uVar3 = FUN_140069500(uVar3);
        in_stack_ffffffffffffff00 = &local_70;
        pcVar4 = (code *)&local_c8;
        FUN_140e63610(uVar3,local_res10,&local_e8,1,pcVar4,in_stack_ffffffffffffff00);
      }
      cVar1 = FUN_140e643f0(local_68,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_68,&local_res8,&local_res10);
  if (local_58 != 0) {
    FUN_140e4cd60();
    local_58 = 0;
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

