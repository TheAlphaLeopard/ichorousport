// gml_Script____struct___379_gml_Object_oBossSplit_Create_0 @ 0x1407d7c20

undefined8 *
gml_Script____struct___379_gml_Object_oBossSplit_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  code *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined1 **in_stack_fffffffffffffe50;
  ulonglong uVar8;
  undefined1 **ppuVar9;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [32];
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  longlong *local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  longlong *local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_res18 = 0;
  local_100 = "gml_Script_anon@1369@___struct___379@gml_Object_oBossSplit_Create_0";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x52;
  pcVar5 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_f0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_17c = 0xffffff;
  local_188 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_19c = 0;
  local_1a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x53;
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a09968);
  iVar2 = FUN_140e63cb0(local_68,&local_res8,&local_res10,uVar3);
  if (0 < iVar2) {
    do {
      local_f8 = 0x55;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_17c = 0;
      local_188 = 0x3fc999999999999a;
      local_f8 = 0x56;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      local_9c = 6;
      local_a8 = local_res8;
      uVar8 = (ulonglong)in_stack_fffffffffffffe50 & 0xffffffffffffff00;
      uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
      FUN_140e87440(&local_a8,DAT_1419fe0e8,0x80000000,&local_118,uVar6,uVar8);
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      local_8c = 6;
      local_98 = local_res10;
      uVar6 = uVar6 & 0xffffffffffffff00;
      FUN_140e87440(&local_98,DAT_1419fe0e8,0x80000000,&local_128,uVar6,uVar8 & 0xffffffffffffff00);
      uVar7 = (undefined4)(uVar6 >> 0x20);
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      local_198 = (undefined4)local_118;
      uStack_194 = local_118._4_4_;
      uStack_190 = uStack_110;
      uStack_18c = uStack_10c;
      if ((1 << (local_f0[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f0);
      }
      FUN_140041b80(local_f0,&local_198);
      local_c0 = local_f0;
      local_198 = (undefined4)local_128;
      uStack_194 = local_128._4_4_;
      uStack_190 = uStack_120;
      uStack_18c = uStack_11c;
      if ((1 << (local_e0[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e0);
      }
      FUN_140041b80(local_e0,&local_198);
      local_b8 = local_e0;
      local_b0 = &local_188;
      ppuVar9 = &local_c0;
      uVar6 = CONCAT44(uVar7,DAT_141a00c58);
      puVar4 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_1a8,3,uVar6,ppuVar9);
      if (puVar4 != &local_158) {
        local_198 = *(undefined4 *)puVar4;
        uStack_194 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_190 = *(undefined4 *)(puVar4 + 1);
        uStack_18c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_198);
      }
      FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_158);
      local_f8 = 0x57;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a09a78);
      local_7c = 6;
      local_88 = local_res8;
      uVar8 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
      uVar6 = uVar6 & 0xffffffffffffff00;
      FUN_140e87440(&local_88,DAT_1419fe158,0x80000000,&local_138,uVar6,uVar8);
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      local_6c = 6;
      local_78 = local_res10;
      uVar6 = uVar6 & 0xffffffffffffff00;
      FUN_140e87440(&local_78,DAT_1419fe158,0x80000000,&local_168,uVar6,uVar8 & 0xffffffffffffff00);
      uVar7 = (undefined4)(uVar6 >> 0x20);
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      local_198 = (undefined4)local_138;
      uStack_194 = local_138._4_4_;
      uStack_190 = uStack_130;
      uStack_18c = uStack_12c;
      if ((1 << (local_f0[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f0);
      }
      FUN_140041b80(local_f0,&local_198);
      local_c0 = local_f0;
      uStack_13c = local_15c;
      uStack_140 = local_160;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
        local_148 = local_168;
      }
      else {
        FUN_1400419b0(&local_148,&local_168);
      }
      local_res18 = 1;
      FUN_1400460e0(&local_148,uVar3);
      local_198 = (undefined4)local_148;
      uStack_194 = local_148._4_4_;
      uStack_190 = uStack_140;
      uStack_18c = uStack_13c;
      if ((1 << (local_e0[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e0);
      }
      FUN_140041b80(local_e0,&local_198);
      local_res18 = 0;
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_b8 = local_e0;
      local_b0 = &local_188;
      in_stack_fffffffffffffe50 = &local_c0;
      pcVar5 = (code *)CONCAT44(uVar7,DAT_141a00c58);
      puVar4 = (undefined8 *)
               FUN_140e634e0(local_res8,local_res10,&local_1a8,3,pcVar5,in_stack_fffffffffffffe50);
      if (puVar4 != &local_178) {
        local_198 = *(undefined4 *)puVar4;
        uStack_194 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_190 = *(undefined4 *)(puVar4 + 1);
        uStack_18c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        FUN_140041b80(&local_178,&local_198);
      }
      FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_178);
      cVar1 = FUN_140e643f0(local_68,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_68,&local_res8,&local_res10);
  if (local_58 != 0) {
    FUN_140e4cd60();
    local_58 = 0;
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(local_f0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

