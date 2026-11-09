// gml_Script_anon_13896____struct___353_gml_Object_oBossEmbraceHalf_Create_0 @ 0x14076db60

undefined8 *
gml_Script_anon_13896____struct___353_gml_Object_oBossEmbraceHalf_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *local_res18 [2];
  undefined4 uVar6;
  undefined8 **ppuVar7;
  ulonglong uVar8;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  byte local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_c0 = "gml_Script_anon@13519@___struct___352@gml_Object_oBossEmbraceHalf_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x1b9;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(&local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_cc = 0xffffff;
  local_d8 = (longlong *)0x0;
  local_3c = 0xffffff;
  local_48 = 0;
  uStack_dc = 0xffffff;
  local_e8 = (longlong *)0x0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x1ba;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  if (puVar3 != &local_68) {
    local_108 = (longlong *)*puVar3;
    uStack_100 = *(undefined4 *)(puVar3 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    FUN_140041b80(&local_68,&local_108);
  }
  local_res18[0] = &local_68;
  ppuVar7 = local_res18;
  uVar5 = CONCAT44(uVar6,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_f8,1,uVar5,ppuVar7);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_b8 = 0x1bb;
    FUN_140edd0e0(param_1,param_2,0,0);
    local_b8 = 0x1bc;
  }
  else {
    local_b8 = 0x1bf;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    uStack_fc = 6;
    uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
    uVar5 = uVar5 & 0xffffffffffffff00;
    local_108 = param_1;
    FUN_140e87440(&local_108,DAT_1419fe0e8,0x80000000,&local_d8,uVar5,uVar8);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    uVar8 = uVar8 & 0xffffffffffffff00;
    uVar5 = uVar5 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_141a07e28,0x80000000,&local_48,uVar5,uVar8);
    FUN_140e609c0(param_1);
    uStack_fc = uStack_cc;
    uStack_100 = uStack_d0;
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) == 0) {
      local_108 = local_d8;
    }
    else {
      FUN_1400419b0(&local_108,&local_d8);
    }
    FUN_1400462a0(&local_108,&local_48);
    if (&local_108 != puVar3) {
      local_88 = (undefined4)local_108;
      uStack_84 = local_108._4_4_;
      uStack_80 = uStack_100;
      uStack_7c = uStack_fc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_88);
    }
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140e60910(1);
    local_b8 = 0x1c0;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
    uStack_fc = 6;
    uVar8 = uVar8 & 0xffffffffffffff00;
    uVar5 = uVar5 & 0xffffffffffffff00;
    local_108 = param_1;
    FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_e8,uVar5,uVar8);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar8 = uVar8 & 0xffffffffffffff00;
    uVar5 = uVar5 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_141a08058,0x80000000,&local_58,uVar5,uVar8);
    FUN_140e609c0(param_1);
    uStack_fc = uStack_dc;
    uStack_100 = uStack_e0;
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
      local_108 = local_e8;
    }
    else {
      FUN_1400419b0(&local_108,&local_e8);
    }
    FUN_1400462a0(&local_108,&local_58);
    if (&local_108 != puVar3) {
      local_88 = (undefined4)local_108;
      uStack_84 = local_108._4_4_;
      uStack_80 = uStack_100;
      uStack_7c = uStack_fc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_88);
    }
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140e60910(1);
    local_b8 = 0x1c1;
    uStack_fc = 6;
    uVar8 = uVar8 & 0xffffffffffffff00;
    uVar5 = uVar5 & 0xffffffffffffff00;
    local_108 = param_1;
    FUN_140e87440(&local_108,DAT_1419fe0e8,0x80000000,&local_d8,uVar5,uVar8);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_88 = (undefined4)local_d8;
    uStack_84 = local_d8._4_4_;
    uStack_80 = uStack_d0;
    uStack_7c = uStack_cc;
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_88);
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    FUN_140e87930(uVar4,DAT_141a07e28,0x80000000,&local_a0);
    local_b8 = 0x1c2;
    uStack_fc = 6;
    local_108 = param_1;
    FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_e8,uVar5 & 0xffffffffffffff00,
                  uVar8 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_88 = (undefined4)local_e8;
    uStack_84 = local_e8._4_4_;
    uStack_80 = uStack_e0;
    uStack_7c = uStack_dc;
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    FUN_140041b80(&local_b0,&local_88);
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    FUN_140e87930(uVar4,DAT_141a08058,0x80000000,&local_b0);
    local_b8 = 0x1c4;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07ef8);
    FUN_140e63610(param_1,param_2,&local_f8,0,uVar4,0);
    local_b8 = 0x1c5;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
    uVar8 = 0;
    FUN_140e63610(param_1,param_2,&local_f8,0,uVar5,0);
    local_b8 = 0x1c7;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    FUN_140e87440(uVar4,DAT_141a0a848,0x80000000,&local_78,uVar5 & 0xffffffffffffff00,
                  uVar8 & 0xffffffffffffff00);
    FUN_1400460e0(&local_78,uVar2);
    FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_78);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

