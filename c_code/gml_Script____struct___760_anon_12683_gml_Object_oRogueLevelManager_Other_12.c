// gml_Script____struct___760_anon_12683_gml_Object_oRogueLevelManager_Other_12 @ 0x140d0eae0

undefined8 *
gml_Script____struct___760_anon_12683_gml_Object_oRogueLevelManager_Other_12
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar6;
  ulonglong uVar7;
  undefined4 uVar9;
  undefined8 uVar8;
  undefined8 **in_stack_fffffffffffffe60;
  ulonglong uVar10;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  longlong *local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined4 local_d8 [4];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined4 local_a8 [8];
  undefined4 local_88 [4];
  undefined4 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined4 *local_60;
  undefined8 *local_58;
  undefined4 *local_50;
  undefined1 local_48 [16];
  longlong local_38;
  
  local_110 = "gml_Script_anon@12280@gml_Object_oRogueLevelManager_Other_12";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x1ab;
  pcVar6 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_d8,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_17c = 0xffffff;
  local_188 = 0;
  puVar3 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fa698);
  uStack_11c = 0xffffff;
  local_128 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_e4 = 0;
  local_f0 = 0;
  local_15c = 0;
  local_168 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x1ac;
  puVar4 = (undefined8 *)FUN_140e8da20(&local_f0,local_res8,0);
  if (puVar4 != &local_188) {
    local_148 = *(undefined4 *)puVar4;
    uStack_144 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_148);
  }
  local_108 = 0x1ad;
  local_14c = 0xf;
  local_158 = (longlong *)0x1000000000000d5;
  iVar2 = FUN_140e63cb0(local_48,&local_res8,&local_res10,&local_158);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (0 < iVar2) {
    do {
      local_108 = 0x1ae;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      puVar5 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a57c10);
      local_14c = 6;
      local_158 = local_res8;
      uVar10 = (ulonglong)in_stack_fffffffffffffe60 & 0xffffffffffffff00;
      uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
      FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_128,uVar7,uVar10);
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_f4 = 6;
      local_100 = local_res8;
      uVar7 = uVar7 & 0xffffffffffffff00;
      FUN_140e87440(&local_100,DAT_1419fe158,0x80000000,&local_138,uVar7,uVar10 & 0xffffffffffffff00
                   );
      uVar9 = (undefined4)(uVar7 >> 0x20);
      if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_100);
      }
      FUN_140e609c0(DAT_141a729d8);
      FUN_140e645a0(&local_148,gml_Script_anon_12427_gml_Object_oRogueLevelManager_Other_12,0);
      if (&local_148 != puVar3) {
        local_198 = local_148;
        uStack_194 = uStack_144;
        uStack_190 = uStack_140;
        uStack_18c = uStack_13c;
        if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        FUN_140041b80(puVar3,&local_198);
      }
      FUN_140e60910(1);
      if (puVar3 != local_d8) {
        local_198 = *puVar3;
        uStack_194 = puVar3[1];
        uStack_190 = puVar3[2];
        uStack_18c = puVar3[3];
        if ((1 << ((byte)local_d8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_198);
      }
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_78 = local_d8;
      local_198 = (undefined4)local_128;
      uStack_194 = local_128._4_4_;
      uStack_190 = uStack_120;
      uStack_18c = uStack_11c;
      if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_198);
      local_198 = (undefined4)local_138;
      uStack_194 = local_138._4_4_;
      uStack_190 = uStack_130;
      uStack_18c = uStack_12c;
      local_70 = local_c8;
      if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_198);
      local_68 = local_b8;
      if (puVar5 != local_a8) {
        local_198 = *puVar5;
        uStack_194 = puVar5[1];
        uStack_190 = puVar5[2];
        uStack_18c = puVar5[3];
        if ((1 << ((byte)local_a8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a8);
        }
        FUN_140041b80(local_a8,&local_198);
      }
      local_60 = local_a8;
      local_58 = &local_188;
      uVar8 = CONCAT44(uVar9,DAT_1419fd6d8);
      puVar5 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_178,4,uVar8,&local_78);
      uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if (puVar5 != local_88) {
        local_198 = *puVar5;
        uStack_194 = puVar5[1];
        uStack_190 = puVar5[2];
        uStack_18c = puVar5[3];
        if ((1 << ((byte)local_88[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_88);
        }
        FUN_140041b80(local_88,&local_198);
      }
      local_50 = local_88;
      in_stack_fffffffffffffe60 = &local_58;
      pcVar6 = (code *)CONCAT44(uVar9,DAT_1419fe568);
      FUN_140e634e0(local_res8,local_res10,&local_168,2,pcVar6,in_stack_fffffffffffffe60);
      cVar1 = FUN_140e643f0(local_48,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_48,&local_res8,&local_res10);
  local_108 = 0x1b0;
  if (&local_188 != param_3) {
    local_198 = (undefined4)local_188;
    uStack_194 = local_188._4_4_;
    uStack_190 = uStack_180;
    uStack_18c = uStack_17c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_198);
  }
  if (local_38 != 0) {
    FUN_140e4cd60();
    local_38 = 0;
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

