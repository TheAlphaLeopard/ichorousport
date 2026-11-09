// gml_Script____struct___762_anon_13609_gml_Object_oRogueLevelManager_Other_12 @ 0x140d10b00

undefined8 *
gml_Script____struct___762_anon_13609_gml_Object_oRogueLevelManager_Other_12
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar7;
  ulonglong uVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  undefined8 **in_stack_fffffffffffffe30;
  ulonglong uVar11;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  longlong *local_188;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  longlong *local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined4 local_108 [4];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined4 local_d8 [4];
  undefined4 local_c8 [8];
  undefined4 local_a8 [4];
  undefined4 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined8 *local_70;
  undefined4 *local_68;
  undefined1 local_60 [16];
  longlong local_50;
  
  local_140 = "gml_Script_anon@13130@gml_Object_oRogueLevelManager_Other_12";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0x1ce;
  pcVar7 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_108,0x10,7,FUN_1400424d0,FUN_140041b30);
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  puVar3 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fa778);
  uStack_14c = 0xffffff;
  local_158 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_114 = 0;
  local_120 = 0;
  local_18c = 0;
  local_198 = 0;
  local_19c = 0;
  local_1a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 0x1cf;
  puVar4 = (undefined8 *)FUN_140e8da20(&local_120,local_res8,0);
  if (puVar4 != &local_1b8) {
    local_178 = *(undefined4 *)puVar4;
    uStack_174 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_170 = *(undefined4 *)(puVar4 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_178);
  }
  local_138 = 0x1d0;
  local_17c = 0xf;
  local_188 = (longlong *)0x1000000000000db;
  iVar2 = FUN_140e63cb0(local_60,&local_res8,&local_res10,&local_188);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if (0 < iVar2) {
    do {
      local_138 = 0x1d1;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      puVar5 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a57c10);
      puVar6 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f7038);
      local_17c = 6;
      local_188 = local_res8;
      uVar11 = (ulonglong)in_stack_fffffffffffffe30 & 0xffffffffffffff00;
      uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
      FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_158,uVar8,uVar11);
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_124 = 6;
      local_130 = local_res8;
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(&local_130,DAT_1419fe158,0x80000000,&local_168,uVar8,uVar11 & 0xffffffffffffff00
                   );
      uVar10 = (undefined4)(uVar8 >> 0x20);
      if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_130);
      }
      FUN_140e609c0(DAT_141a729d8);
      FUN_140e645a0(&local_178,gml_Script_anon_13306_gml_Object_oRogueLevelManager_Other_12,0);
      if (&local_178 != puVar3) {
        local_1c8 = local_178;
        uStack_1c4 = uStack_174;
        uStack_1c0 = uStack_170;
        uStack_1bc = uStack_16c;
        if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        FUN_140041b80(puVar3,&local_1c8);
      }
      FUN_140e60910(1);
      if (puVar3 != local_108) {
        local_1c8 = *puVar3;
        uStack_1c4 = puVar3[1];
        uStack_1c0 = puVar3[2];
        uStack_1bc = puVar3[3];
        if ((1 << ((byte)local_108[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_108);
        }
        FUN_140041b80(local_108,&local_1c8);
      }
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_98 = local_108;
      local_1c8 = (undefined4)local_158;
      uStack_1c4 = local_158._4_4_;
      uStack_1c0 = uStack_150;
      uStack_1bc = uStack_14c;
      if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_1c8);
      local_1c8 = (undefined4)local_168;
      uStack_1c4 = local_168._4_4_;
      uStack_1c0 = uStack_160;
      uStack_1bc = uStack_15c;
      local_90 = local_f8;
      if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_1c8);
      local_88 = local_e8;
      if (puVar5 != local_d8) {
        local_1c8 = *puVar5;
        uStack_1c4 = puVar5[1];
        uStack_1c0 = puVar5[2];
        uStack_1bc = puVar5[3];
        if ((1 << ((byte)local_d8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_1c8);
      }
      local_80 = local_d8;
      if (puVar6 != local_c8) {
        local_1c8 = *puVar6;
        uStack_1c4 = puVar6[1];
        uStack_1c0 = puVar6[2];
        uStack_1bc = puVar6[3];
        if ((1 << ((byte)local_c8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_1c8);
      }
      local_78 = local_c8;
      local_70 = &local_1b8;
      uVar9 = CONCAT44(uVar10,DAT_1419fd6d8);
      puVar5 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_1a8,5,uVar9,&local_98);
      uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
      if (puVar5 != local_a8) {
        local_1c8 = *puVar5;
        uStack_1c4 = puVar5[1];
        uStack_1c0 = puVar5[2];
        uStack_1bc = puVar5[3];
        if ((1 << ((byte)local_a8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a8);
        }
        FUN_140041b80(local_a8,&local_1c8);
      }
      local_68 = local_a8;
      in_stack_fffffffffffffe30 = &local_70;
      pcVar7 = (code *)CONCAT44(uVar10,DAT_1419fe568);
      FUN_140e634e0(local_res8,local_res10,&local_198,2,pcVar7,in_stack_fffffffffffffe30);
      cVar1 = FUN_140e643f0(local_60,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_60,&local_res8,&local_res10);
  local_138 = 0x1d3;
  if (&local_1b8 != param_3) {
    local_1c8 = (undefined4)local_1b8;
    uStack_1c4 = local_1b8._4_4_;
    uStack_1c0 = uStack_1b0;
    uStack_1bc = uStack_1ac;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_1c8);
  }
  if (local_50 != 0) {
    FUN_140e4cd60();
    local_50 = 0;
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  _eh_vector_destructor_iterator_(local_108,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
}

