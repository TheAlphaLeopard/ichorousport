// gml_Script_anon_25748_DefineTrinkets_TRINKETSINIT @ 0x140601750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_25748_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  code *pcVar8;
  code *pcVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined1 **in_stack_fffffffffffffe40;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_124;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108 [3];
  undefined4 local_fc;
  undefined1 local_f8 [16];
  undefined4 local_e8 [4];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined4 local_a8 [4];
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  undefined4 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined4 *local_60;
  undefined1 local_58 [16];
  longlong local_48;
  
  local_198 = 0;
  local_140 = "gml_Script_anon@25019@DefineTrinkets@TRINKETSINIT";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0x3c0;
  pcVar8 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_f8,0x10,6,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_14c = 0xffffff;
  local_158 = 0;
  puVar4 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ffc98);
  local_164 = 0;
  local_170 = 0;
  local_174 = 0;
  local_180 = 0;
  local_184 = 0;
  local_190 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 0x3c1;
  uStack_19c = 0xf;
  local_1a8 = 0x10000000000009d;
  iVar2 = FUN_140e63cb0(local_58,&local_res8,&local_res10,&local_1a8);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if (0 < iVar2) {
    do {
      local_138 = 0x3c3;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56cd0);
      local_124 = 10;
      local_130 = 2;
      iVar2 = FUN_140e851f0(uVar5,&local_130,DAT_141955260,0);
      if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_130);
      }
      if (iVar2 == 0) {
        local_138 = 0x3c3;
      }
      else {
        local_138 = 0x3c4;
        pcVar9 = pcVar8;
        if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_170);
          pcVar9 = pcVar8;
        }
        local_170 = 0;
        local_168 = 0;
        local_164 = 5;
        if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_180);
        }
        local_180 = 0;
        local_178 = 0;
        local_174 = 5;
        if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_190);
        }
        local_190 = 0;
        local_188 = 0;
        local_184 = 5;
        pcVar8 = (code *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1edd0);
        uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
        FUN_140e87440(uVar3,DAT_1419f5958,0x80000000,&local_158,uVar10,
                      (ulonglong)in_stack_fffffffffffffe40 & 0xffffffffffffff00);
        uVar11 = (undefined4)(uVar10 >> 0x20);
        local_1b8 = _DAT_141dc6760;
        uStack_1b4 = uRam0000000141dc6764;
        uStack_1b0 = uRam0000000141dc6768;
        uStack_1ac = uRam0000000141dc676c;
        if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_1b8);
        local_88 = local_f8;
        FUN_140e609c0(DAT_141a729d8);
        FUN_140e645a0(&local_118,gml_Script_anon_25249_DefineTrinkets_TRINKETSINIT,0);
        if (&local_118 != puVar4) {
          local_1b8 = local_118;
          uStack_1b4 = uStack_114;
          uStack_1b0 = uStack_110;
          uStack_1ac = uStack_10c;
          if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_1b8);
        }
        FUN_140e60910(1);
        if (puVar4 != local_e8) {
          local_1b8 = *puVar4;
          uStack_1b4 = puVar4[1];
          uStack_1b0 = puVar4[2];
          uStack_1ac = puVar4[3];
          if ((1 << ((byte)local_e8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_e8);
          }
          FUN_140041b80(local_e8,&local_1b8);
        }
        if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        uVar5 = CONCAT44(uVar11,DAT_141a0a0d8);
        local_80 = local_e8;
        puVar6 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_190,1,uVar5,&local_88);
        uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
        uStack_1a0 = *(undefined4 *)(puVar6 + 1);
        if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
          local_1a8 = *puVar6;
        }
        else {
          FUN_1400419b0(&local_1a8,puVar6);
        }
        local_198 = 1;
        local_fc = 7;
        local_108[0] = 5;
        FUN_140042560(&local_1a8,local_108);
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_108);
        }
        local_1b8 = (undefined4)local_1a8;
        uStack_1b4 = local_1a8._4_4_;
        uStack_1b0 = uStack_1a0;
        uStack_1ac = uStack_19c;
        if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_1b8);
        local_198 = 0;
        if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_78 = local_d8;
        local_1b8 = (undefined4)local_158;
        uStack_1b4 = local_158._4_4_;
        uStack_1b0 = uStack_150;
        uStack_1ac = uStack_14c;
        if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_1b8);
        local_70 = local_c8;
        uStack_8c = 0xf;
        local_98 = 0x1000000000000ee;
        local_1b8 = 0xee;
        uStack_1b4 = 0x1000000;
        uStack_1b0 = uStack_90;
        uStack_1ac = 0xf;
        if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_1b8);
        local_68 = local_b8;
        puVar7 = (undefined4 *)
                 FUN_140e634e0(local_res8,local_res10,&local_180,2,CONCAT44(uVar11,DAT_1419fd6d8),
                               &local_80);
        if (puVar7 != local_a8) {
          local_1b8 = *puVar7;
          uStack_1b4 = puVar7[1];
          uStack_1b0 = puVar7[2];
          uStack_1ac = puVar7[3];
          if ((1 << ((byte)local_a8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_a8);
          }
          FUN_140041b80(local_a8,&local_1b8);
        }
        local_60 = local_a8;
        in_stack_fffffffffffffe40 = &local_70;
        FUN_140e63610(local_res8,local_res10,&local_170,3,pcVar8,in_stack_fffffffffffffe40);
      }
      cVar1 = FUN_140e643f0(local_58,&local_res8,&local_res10);
    } while (cVar1 != '\0');
    param_3 = local_res18;
  }
  FUN_140e63970(local_58,&local_res8,&local_res10);
  if (local_48 != 0) {
    FUN_140e4cd60();
    local_48 = 0;
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
}

