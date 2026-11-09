// gml_Script_anon_11811_DefineTrinkets_TRINKETSINIT @ 0x1405ec980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_11811_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar8;
  ulonglong uVar9;
  undefined1 **in_stack_fffffffffffffe40;
  ulonglong uVar10;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  longlong *local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined4 local_10c;
  longlong *local_108;
  undefined4 local_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_160 = "gml_Script_anon@11286@DefineTrinkets@TRINKETSINIT";
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  local_158 = 0x1b1;
  pcVar8 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_f8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar7 = 0xffffff;
  uStack_11c = 0xffffff;
  local_128 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  local_19c = 0;
  local_1a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_158 = 0x1b2;
  local_18c = 0xf;
  local_198 = (longlong *)0x1000000000000ee;
  iVar3 = FUN_140e63cb0(local_88,&local_res8,&local_res10,&local_198);
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if (0 < iVar3) {
    do {
      local_158 = 0x1b4;
      local_18c = 6;
      local_198 = local_res8;
      uVar10 = (ulonglong)in_stack_fffffffffffffe40 & 0xffffffffffffff00;
      uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
      FUN_140e87440(&local_198,DAT_141a0a828,0x80000000,&local_128,uVar9,uVar10);
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_1b8 = local_128;
      uStack_1b0 = CONCAT44(uStack_11c,uStack_120);
      if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_1b8);
      local_158 = 0x1b6;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      local_10c = 6;
      local_118 = local_res8;
      uVar10 = uVar10 & 0xffffffffffffff00;
      uVar9 = uVar9 & 0xffffffffffffff00;
      FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_138,uVar9,uVar10);
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      local_fc = 6;
      local_108 = local_res8;
      uVar9 = uVar9 & 0xffffffffffffff00;
      FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_148,uVar9,uVar10 & 0xffffffffffffff00
                   );
      uVar7 = (undefined4)(uVar9 >> 0x20);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_1b8 = local_138;
      uStack_1b0 = CONCAT44(uStack_12c,uStack_130);
      if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_1b8);
      local_a8 = local_f8;
      local_1b8 = local_148;
      uStack_1b0 = CONCAT44(uStack_13c,uStack_140);
      if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_1b8);
      local_1b8 = CONCAT44(uRam0000000141dd4bcc,_DAT_141dd4bc8);
      uStack_1b0 = CONCAT44(DAT_141dd4bd4,uRam0000000141dd4bd0);
      local_a0 = local_e8;
      if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_1b8);
      local_98 = local_d8;
      uStack_ac = 0xf;
      local_b8 = 0x100000000000141;
      local_1b8 = 0x100000000000141;
      uStack_1b0 = CONCAT44(0xf,uStack_b0);
      if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_1b8);
      local_90 = local_c8;
      in_stack_fffffffffffffe40 = &local_a8;
      pcVar8 = (code *)CONCAT44(uVar7,DAT_141a0a7c8);
      uVar4 = FUN_140e634e0(local_res8,local_res10,&local_1a8,4,pcVar8,in_stack_fffffffffffffe40);
      iVar3 = FUN_140e63cb0(local_68,&local_res8,&local_res10,uVar4);
      uVar4 = local_188;
      if (0 < iVar3) {
        uVar1 = CONCAT44(uStack_17c,uStack_180);
        do {
          local_158 = 0x1b7;
          puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
          FUN_140e609c0(local_res8);
          if (&local_188 != puVar5) {
            local_1b8 = uVar4;
            uStack_1b0 = uVar1;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar5);
            }
            FUN_140041b80(puVar5,&local_1b8);
          }
          FUN_140e60910(1);
          local_158 = 0x1b8;
          uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
          puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a56cd0);
          in_stack_fffffffffffffe40 =
               (undefined1 **)((ulonglong)in_stack_fffffffffffffe40 & 0xffffffffffffff00);
          pcVar8 = (code *)((ulonglong)pcVar8 & 0xffffffffffffff00);
          FUN_140e87440(uVar6,DAT_141a56cd0,0x80000000,&local_178,pcVar8,in_stack_fffffffffffffe40);
          FUN_140e609c0(local_res8);
          if (&local_178 != puVar5) {
            local_1b8 = local_178;
            uStack_1b0 = CONCAT44(uStack_16c,uStack_170);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar5);
            }
            FUN_140041b80(puVar5,&local_1b8);
          }
          FUN_140e60910(1);
          cVar2 = FUN_140e643f0(local_68,&local_res8,&local_res10);
        } while (cVar2 != '\0');
      }
      FUN_140e63970(local_68,&local_res8,&local_res10);
      if (local_58 != 0) {
        FUN_140e4cd60();
      }
      cVar2 = FUN_140e643f0(local_88,&local_res8,&local_res10);
      uVar7 = uStack_17c;
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_88,&local_res8,&local_res10);
  if (local_78 != 0) {
    FUN_140e4cd60();
    local_78 = 0;
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_168;
  return param_3;
}

