// gml_Script_anon_766_gml_Object_oEnemyCage_Create_0 @ 0x1409298c0

undefined8 *
gml_Script_anon_766_gml_Object_oEnemyCage_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 local_78 [3];
  undefined4 local_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined1 local_58 [16];
  longlong local_48;
  
  local_150 = "gml_Script_anon@215@gml_Object_oEnemyCage_Create_0";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 7;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_68,param_4,1,param_5);
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_148 = 7;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_60;
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_148 = 7;
    if (0 < (int)local_68[0]) {
      puVar5 = (undefined8 *)*local_60;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0x3ff0000000000000;
  }
  local_148 = 8;
  local_19c = 6;
  local_1a8 = local_res8;
  FUN_140e87440(&local_1a8,DAT_141a101f8,0x80000000,&local_d8,0,0);
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_198 = local_d8;
  uStack_190 = uStack_d0;
  uStack_18c = uStack_cc;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_198);
  uStack_15c = 0;
  local_168 = 0xc010000000000000;
  local_148 = 10;
  local_19c = 0xf;
  local_1a8 = 0x1000000000000ea;
  iVar2 = FUN_140e63cb0(local_58,&local_res8,&local_res10,&local_1a8);
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uVar7 = 0;
  if (0 < iVar2) {
    do {
      local_148 = 0xc;
      local_bc = 6;
      local_c8 = local_res10;
      FUN_140e87440(&local_c8,DAT_141a0a798,0x80000000,&local_e8,0,0);
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      local_ac = 6;
      local_b8 = local_res8;
      FUN_140e87440(&local_b8,DAT_141a0a808,0x80000000,&local_f8,0,0);
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      iVar2 = FUN_140e851f0(&local_e8,&local_f8,DAT_141955260,1);
      if (0 < iVar2) {
        local_9c = 6;
        local_a8 = local_res10;
        FUN_140e87440(&local_a8,DAT_141a0a808,0x80000000,&local_108,0,0);
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        local_8c = 6;
        local_98 = local_res8;
        FUN_140e87440(&local_98,DAT_141a0a798,0x80000000,&local_118,0,0);
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        iVar2 = FUN_140e851f0(&local_108,&local_118,DAT_141955260,1);
        if (iVar2 != -2 && iVar2 < 0) {
          local_7c = 6;
          local_88 = local_res8;
          FUN_140e87440(&local_88,DAT_141a0a788,0x80000000,&local_178,0,0);
          if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_88);
          }
          local_134 = local_16c;
          local_138 = local_170;
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
            local_140 = local_178;
          }
          else {
            FUN_1400419b0(&local_140,&local_178);
          }
          local_6c = 7;
          local_78[0] = 1;
          FUN_1400460e0(&local_140,local_78);
          if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_78);
          }
          iVar2 = FUN_140e851f0(&local_188,&local_140,DAT_141955260,1);
          if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_140);
          }
          if (iVar2 != -2 && iVar2 < 1) {
            uStack_18c = 6;
            local_198 = local_res8;
            FUN_140e87440(&local_198,DAT_141a0a788,0x80000000,&local_178,0,0);
            if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_198);
            }
            if ((int)local_68[0] < 1) {
              puVar5 = &DAT_1419df7b0;
            }
            else {
              puVar5 = (undefined8 *)*local_60;
            }
            local_19c = local_17c;
            local_1a0 = local_180;
            if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
              local_1a8 = local_188;
            }
            else {
              FUN_1400419b0(&local_1a8,&local_188);
            }
            FUN_1400460e0(&local_1a8,puVar5);
            uVar3 = FUN_140e851f0(&local_1a8,&local_178,DAT_141955260,1);
            if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
            if (uVar3 < 0x80000000) {
              local_148 = 0xf;
              uStack_18c = 6;
              local_198 = local_res8;
              FUN_140e87440(&local_198,DAT_141a0a828,0x80000000,&local_128,0,0);
              if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_198);
              }
              local_198 = local_128;
              uStack_190 = uStack_120;
              uStack_18c = uStack_11c;
              FUN_140041b80(&local_168,&local_198);
              local_148 = 0x10;
              uVar7 = uStack_15c;
              break;
            }
          }
        }
      }
      cVar1 = FUN_140e643f0(local_58,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_58,&local_res8,&local_res10);
  local_148 = 0x13;
  if (&local_168 != param_3) {
    local_198 = local_168;
    uStack_190 = uStack_160;
    uStack_18c = uStack_15c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_198);
  }
  if (local_48 != 0) {
    FUN_140e4cd60();
    local_48 = 0;
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (0 < (int)local_68[0]) {
    puVar5 = local_60;
    do {
      puVar4 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

