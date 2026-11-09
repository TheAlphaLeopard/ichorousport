// gml_Script_anon_378_gml_Object_oTutorialFallIn_Create_0 @ 0x140df9230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_378_gml_Object_oTutorialFallIn_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong **pplVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined4 uVar9;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong in_stack_fffffffffffffec0;
  longlong *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_e0 = "gml_Object_oTutorialDash_Step_0";
  local_d8 = 0;
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_5c = 0xffffff;
  local_68 = (longlong *)0x0;
  uStack_6c = 0xffffff;
  local_78 = (longlong *)0x0;
  pplVar3 = (longlong **)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  local_7c = 0xffffff;
  local_88 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_d8 = 2;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff228);
  uStack_12c = 0;
  local_138 = (longlong *)0x0;
  iVar2 = FUN_140e851f0(uVar4,&local_138,DAT_141955260,0);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar2 == 0) {
    local_d8 = 4;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uStack_12c = 6;
    in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
    uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
    local_138 = param_1;
    FUN_140e87440(&local_138,DAT_1419fe0e8,0x80000000,&local_68,uVar6,in_stack_fffffffffffffec0);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    uStack_12c = 6;
    uVar6 = uVar6 & 0xffffffffffffff00;
    local_138 = param_1;
    FUN_140e87440(&local_138,DAT_1419fe158,0x80000000,&local_78,uVar6,
                  in_stack_fffffffffffffec0 & 0xffffffffffffff00);
    uVar9 = (undefined4)(uVar6 >> 0x20);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = local_68;
    uStack_130 = uStack_60;
    uStack_12c = uStack_5c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_138);
    local_58 = local_c8;
    local_138 = local_78;
    uStack_130 = uStack_70;
    uStack_12c = uStack_6c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_138);
    local_50 = local_b8;
    uStack_12c = 0xf;
    local_138 = (longlong *)0x1000000000000ee;
    local_118 = 0xee;
    uStack_114 = 0x1000000;
    uStack_110 = uStack_130;
    uStack_10c = 0xf;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_118);
    local_48 = local_a8;
    uVar4 = FUN_140e634e0(param_1,param_2,&local_128,3,CONCAT44(uVar9,DAT_141a12628),&local_58);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_d8 = 6;
      uStack_12c = 0xd;
      local_138 = (longlong *)0x0;
      if (&local_138 != pplVar3) {
        local_118 = 0;
        uStack_114 = 0;
        uStack_110 = uStack_130;
        uStack_10c = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar3);
        }
        FUN_140041b80(pplVar3,&local_118);
      }
      local_d8 = 7;
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff228);
      FUN_140046040(uVar4);
    }
  }
  else {
    local_d8 = 0xb;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff228);
    uStack_12c = 0;
    local_138 = (longlong *)0x3ff0000000000000;
    iVar2 = FUN_140e851f0(uVar4,&local_138,DAT_141955260,0);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (iVar2 == 0) {
      local_d8 = 0xd;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      uStack_12c = 0xf;
      local_138 = (longlong *)0x1000000000000ee;
      FUN_140e87440(&local_138,DAT_1419ff968,0x80000000,&local_88,
                    (ulonglong)pcVar5 & 0xffffffffffffff00,
                    in_stack_fffffffffffffec0 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      uStack_12c = 0xf;
      local_138 = (longlong *)0x1000000000000ee;
      uVar4 = FUN_140069500(&local_138);
      puVar7 = &local_88;
      uVar4 = FUN_140e63610(uVar4,param_2,&local_128,0,puVar7,0);
      uVar9 = (undefined4)((ulonglong)puVar7 >> 0x20);
      cVar1 = FUN_140e491e0(uVar4);
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if (cVar1 != '\0') {
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        local_f8 = 0;
        local_f0 = 0;
        local_ec = 5;
        uStack_12c = 0xf;
        local_138 = (longlong *)0x10000000000013a;
        local_118 = 0x13a;
        uStack_114 = 0x1000000;
        uStack_110 = uStack_130;
        uStack_10c = 0xf;
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_118);
        local_58 = local_c8;
        uVar8 = CONCAT44(uVar9,DAT_141a02ef8);
        uVar4 = FUN_140e634e0(param_1,param_2,&local_f8,1,uVar8,&local_58);
        uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
        cVar1 = FUN_140e491e0(uVar4);
        if (cVar1 == '\0') {
          local_d8 = 0xf;
          if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          local_108 = 0;
          local_100 = 0;
          local_fc = 5;
          uStack_12c = 0xf;
          local_138 = (longlong *)0x1000002000000a9;
          local_118 = 0xa9;
          uStack_114 = 0x1000002;
          uStack_110 = uStack_130;
          uStack_10c = 0xf;
          if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_b8);
          }
          FUN_140041b80(local_b8,&local_118);
          local_50 = local_b8;
          local_118 = _DAT_1419ee740;
          uStack_114 = uRam00000001419ee744;
          uStack_110 = uRam00000001419ee748;
          uStack_10c = uRam00000001419ee74c;
          if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_a8);
          }
          FUN_140041b80(local_a8,&local_118);
          local_48 = local_a8;
          local_118 = _DAT_1419df7a0;
          uStack_114 = uRam00000001419df7a4;
          uStack_110 = uRam00000001419df7a8;
          uStack_10c = uRam00000001419df7ac;
          if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_98);
          }
          FUN_140041b80(local_98,&local_118);
          local_40 = local_98;
          FUN_140e634e0(param_1,param_2,&local_108,3,CONCAT44(uVar9,DAT_141a0a2e8),&local_50);
          local_d8 = 0x10;
          if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          local_128 = 0;
          local_120 = 0;
          local_11c = 5;
          local_118 = _DAT_141ddbd18;
          uStack_114 = uRam0000000141ddbd1c;
          uStack_110 = uRam0000000141ddbd20;
          uStack_10c = DAT_141ddbd24;
          if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_c8);
          }
          FUN_140041b80(local_c8,&local_118);
          local_58 = local_c8;
          gml_Script_CreateBossUi(param_1,param_2,&local_128,1,&local_58);
          local_d8 = 0x11;
          uStack_12c = 0xd;
          local_138 = (longlong *)0x0;
          if (&local_138 != pplVar3) {
            local_118 = 0;
            uStack_114 = 0;
            uStack_110 = uStack_130;
            uStack_10c = 0xd;
            if ((1 << ((byte)*(undefined4 *)((longlong)pplVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(pplVar3);
            }
            FUN_140041b80(pplVar3,&local_118);
          }
          local_d8 = 0x12;
          FUN_140edd0e0(param_1,param_2,0,0);
        }
      }
    }
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return;
}

