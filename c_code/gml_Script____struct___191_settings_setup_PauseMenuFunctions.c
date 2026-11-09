// gml_Script____struct___191_settings_setup_PauseMenuFunctions @ 0x1404242a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___191_settings_setup_PauseMenuFunctions
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined4 uVar9;
  ulonglong uVar7;
  undefined8 **ppuVar8;
  ulonglong in_stack_fffffffffffffea0;
  ulonglong uVar10;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  byte local_84;
  undefined8 local_80;
  byte local_74;
  undefined8 local_70;
  byte local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  
  local_d0 = 
  "gml_Script_anon@6618@___struct___192@___struct___191@settings_setup@PauseMenuFunctions";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x118;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_90,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_94 = 0xffffff;
  local_a0 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57e60);
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_10c = 0;
  local_118 = 0;
  local_54 = 0;
  local_60 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x119;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a55440);
  FUN_140e87440(uVar3,DAT_141a551b0,0x80000000,&local_a0,(ulonglong)pcVar6 & 0xffffffffffffff00,
                in_stack_fffffffffffffea0 & 0xffffffffffffff00);
  local_128 = CONCAT44(uRam0000000141dd2acc,_DAT_141dd2ac8);
  uStack_120 = uRam0000000141dd2ad0;
  uStack_11c = DAT_141dd2ad4;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  FUN_140041b80(&local_90,&local_128);
  local_50 = &local_90;
  puVar4 = (undefined8 *)
           FUN_140e8da20(&local_60,param_1,8,&DAT_1419e4be0,&DAT_1419e4c10,&DAT_1419e4c30,
                         &DAT_1419e4c20,&DAT_1419e4bd0,&DAT_1419e4bb0,&DAT_1419e4bc0,&DAT_1419e4bf0)
  ;
  if (puVar4 != &local_80) {
    local_128 = *puVar4;
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_128);
  }
  local_48 = &local_80;
  uVar3 = FUN_140069500(uVar3);
  puVar4 = &local_a0;
  puVar5 = (undefined8 *)FUN_140e63610(uVar3,param_2,&local_f8,1,puVar4,&local_50);
  uVar9 = (undefined4)((ulonglong)puVar4 >> 0x20);
  if (puVar5 != &local_70) {
    local_128 = *puVar5;
    uStack_120 = *(undefined4 *)(puVar5 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_70);
    }
    FUN_140041b80(&local_70,&local_128);
  }
  local_40 = &local_70;
  ppuVar8 = &local_48;
  uVar7 = CONCAT44(uVar9,DAT_141a03ca8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,2,uVar7,ppuVar8);
  if (puVar4 != &local_e8) {
    local_128 = *puVar4;
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_128);
  }
  local_c8 = 0x11a;
  uVar10 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_141a57ed0,0x80000000,&local_b0,uVar7 & 0xffffffffffffff00,uVar10);
  iVar1 = FUN_140e851f0(&local_e8,&local_b0,DAT_141955260,0);
  if (iVar1 != 0) {
    local_c8 = 0x11b;
    local_128 = local_e8;
    uStack_120 = uStack_e0;
    uStack_11c = uStack_dc;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_128);
    FUN_140e87930(uVar2,DAT_141a57ed0,0x80000000,&local_108);
    local_c8 = 0x11c;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    uVar3 = gml_Script_WindowSetMode(param_1,param_2,&local_118,0,0);
    uStack_11c = 0;
    local_128 = 0;
    iVar1 = FUN_140e851f0(uVar3,&local_128,DAT_141955260,0);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if (iVar1 == 0) {
      local_c8 = 0x11d;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_f8 = 0;
      local_f0 = 0;
      local_ec = 5;
      local_50 = &local_e8;
      ppuVar8 = &local_50;
      puVar4 = (undefined8 *)
               gml_Script____struct___97_WindowSetMode_GameViewRect
                         (param_1,param_2,&local_f8,1,ppuVar8);
      if (puVar4 != &local_108) {
        local_128 = *puVar4;
        uStack_120 = *(undefined4 *)(puVar4 + 1);
        uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_128);
      }
      FUN_140e87930(uVar2,DAT_141a57ed0,0x80000000,&local_108);
      local_c8 = 0x11e;
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      local_118 = 0;
      local_110 = 0;
      local_10c = 5;
      uStack_11c = 0xf;
      local_128 = 0x100000000000058;
      FUN_140e87440(&local_128,DAT_141a57ff0,0x80000000,&local_c0,
                    (ulonglong)ppuVar8 & 0xffffffffffffff00,uVar10 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      uStack_11c = 0xf;
      local_128 = 0x100000000000058;
      uVar2 = FUN_140069500(&local_128);
      FUN_140e63610(uVar2,param_2,&local_118,0,&local_c0,0);
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
    }
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  _eh_vector_destructor_iterator_(&local_90,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

