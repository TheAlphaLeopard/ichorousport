// gml_Object_oImGui_Step_0 @ 0x140b23800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oImGui_Step_0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 **in_stack_ffffffffffffff00;
  ulonglong uVar7;
  undefined4 **ppuVar8;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8 [3];
  byte local_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_60 = "gml_Object_oIKTest_Draw_0";
  local_58 = 0;
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  _eh_vector_constructor_iterator_(local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = (longlong *)0x0;
  uStack_7c = 0xffffff;
  local_88 = (longlong *)0x0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_58 = 3;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff228);
  uStack_ec = DAT_141dd95d4;
  uStack_f0 = DAT_141dd95d0;
  if ((1 << ((byte)DAT_141dd95d4 & 0x1f) & 0x46U) == 0) {
    local_f8 = DAT_141dd95c8;
  }
  else {
    FUN_1400419b0(&local_f8,&DAT_141dd95c8);
  }
  iVar1 = FUN_140e851f0(uVar2,&local_f8,DAT_141955260,0);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (iVar1 == 0) {
    local_58 = 3;
  }
  else {
    local_58 = 5;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uVar5 = 0;
    gml_Script_arm_fix(param_1,param_2,&local_d8,0,0);
    local_58 = 7;
    uStack_ec = DAT_141dd95b4;
    uStack_f0 = DAT_141dd95b0;
    if ((1 << ((byte)DAT_141dd95b4 & 0x1f) & 0x46U) == 0) {
      local_f8 = DAT_141dd95a8;
    }
    else {
      FUN_1400419b0(&local_f8,&DAT_141dd95a8);
    }
    iVar1 = FUN_140e851f0(uVar2,&local_f8,DAT_141955260,0);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if (iVar1 == 0) {
      local_58 = 8;
      (**(code **)(*param_1 + 8))(param_1,DAT_1419ff228);
      uVar6 = (undefined4)(uVar5 >> 0x20);
      FUN_140e9c240(0xff);
      local_58 = 9;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f3828);
      puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f38c8);
      if (puVar3 != local_c8) {
        local_e8 = *puVar3;
        uStack_e4 = puVar3[1];
        uStack_e0 = puVar3[2];
        uStack_dc = puVar3[3];
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_e8);
      }
      local_50 = local_c8;
      if (puVar4 != local_b8) {
        local_e8 = *puVar4;
        uStack_e4 = puVar4[1];
        uStack_e0 = puVar4[2];
        uStack_dc = puVar4[3];
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_e8);
      }
      local_48 = local_b8;
      local_e8 = _DAT_1419ebc30;
      uStack_e4 = uRam00000001419ebc34;
      uStack_e0 = uRam00000001419ebc38;
      uStack_dc = uRam00000001419ebc3c;
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_e8);
      local_40 = local_a8;
      local_e8 = _DAT_1419df7a0;
      uStack_e4 = uRam00000001419df7a4;
      uStack_e0 = uRam00000001419df7a8;
      uStack_dc = uRam00000001419df7ac;
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_e8);
      local_38 = local_98;
      in_stack_ffffffffffffff00 = &local_50;
      uVar5 = CONCAT44(uVar6,DAT_1419fe448);
      FUN_140e634e0(param_1,param_2,&local_d8,4,uVar5,in_stack_ffffffffffffff00);
    }
    local_58 = 0xc;
    FUN_140e9c240(0xff00);
    local_58 = 0xd;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uStack_ec = 6;
    uVar7 = (ulonglong)in_stack_ffffffffffffff00 & 0xffffffffffffff00;
    uVar5 = uVar5 & 0xffffffffffffff00;
    local_f8 = param_1;
    FUN_140e87440(&local_f8,DAT_1419fe0e8,0x80000000,&local_78,uVar5,uVar7);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    uStack_ec = 6;
    uVar5 = uVar5 & 0xffffffffffffff00;
    local_f8 = param_1;
    FUN_140e87440(&local_f8,DAT_1419fe158,0x80000000,&local_88,uVar5,uVar7 & 0xffffffffffffff00);
    uVar6 = (undefined4)(uVar5 >> 0x20);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_e8 = (undefined4)local_78;
    uStack_e4 = local_78._4_4_;
    uStack_e0 = uStack_70;
    uStack_dc = uStack_6c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_e8);
    local_50 = local_c8;
    local_e8 = (undefined4)local_88;
    uStack_e4 = local_88._4_4_;
    uStack_e0 = uStack_80;
    uStack_dc = uStack_7c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_e8);
    local_48 = local_b8;
    local_e8 = _DAT_1419ebc30;
    uStack_e4 = uRam00000001419ebc34;
    uStack_e0 = uRam00000001419ebc38;
    uStack_dc = uRam00000001419ebc3c;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_e8);
    local_40 = local_a8;
    local_e8 = _DAT_1419df7a0;
    uStack_e4 = uRam00000001419df7a4;
    uStack_e0 = uRam00000001419df7a8;
    uStack_dc = uRam00000001419df7ac;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_e8);
    local_38 = local_98;
    ppuVar8 = &local_50;
    uVar5 = CONCAT44(uVar6,DAT_1419fe448);
    FUN_140e634e0(param_1,param_2,&local_d8,4,uVar5,ppuVar8);
    local_58 = 0xf;
    FUN_140e9c240(0xffffff);
    local_58 = 0x10;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uStack_ec = 6;
    uVar7 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
    uVar5 = uVar5 & 0xffffffffffffff00;
    local_f8 = param_1;
    FUN_140e87440(&local_f8,DAT_1419fe0e8,0x80000000,&local_78,uVar5,uVar7);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    uStack_ec = 6;
    uVar5 = uVar5 & 0xffffffffffffff00;
    local_f8 = param_1;
    FUN_140e87440(&local_f8,DAT_1419fe158,0x80000000,&local_88,uVar5,uVar7 & 0xffffffffffffff00);
    uVar6 = (undefined4)(uVar5 >> 0x20);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    uStack_ec = uStack_6c;
    uStack_f0 = uStack_70;
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) == 0) {
      local_f8 = local_78;
    }
    else {
      FUN_1400419b0(&local_f8,&local_78);
    }
    uStack_dc = 7;
    local_e8 = 8;
    FUN_1400460e0(&local_f8,&local_e8);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = (undefined4)local_f8;
    uStack_e4 = local_f8._4_4_;
    uStack_e0 = uStack_f0;
    uStack_dc = uStack_ec;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_e8);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_50 = local_c8;
    uStack_ec = uStack_7c;
    uStack_f0 = uStack_80;
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) == 0) {
      local_f8 = local_88;
    }
    else {
      FUN_1400419b0(&local_f8,&local_88);
    }
    uStack_dc = 7;
    local_e8 = 8;
    FUN_1400460e0(&local_f8,&local_e8);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = (undefined4)local_f8;
    uStack_e4 = local_f8._4_4_;
    uStack_e0 = uStack_f0;
    uStack_dc = uStack_ec;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_e8);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_48 = local_b8;
    local_e8 = _DAT_141dd95b8;
    uStack_e4 = uRam0000000141dd95bc;
    uStack_e0 = uRam0000000141dd95c0;
    uStack_dc = DAT_141dd95c4;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_e8);
    local_40 = local_a8;
    FUN_140e634e0(param_1,param_2,&local_d8,3,CONCAT44(uVar6,DAT_141a04598),&local_50);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return;
}

