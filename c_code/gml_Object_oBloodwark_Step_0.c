// gml_Object_oBloodwark_Step_0 @ 0x1406eb280

void gml_Object_oBloodwark_Step_0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong *local_res8;
  longlong *local_res10;
  code *pcVar5;
  ulonglong uVar6;
  undefined4 **in_stack_fffffffffffffe50;
  ulonglong uVar7;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined4 local_120 [3];
  byte local_114;
  undefined1 local_110 [12];
  byte local_104;
  undefined4 local_100 [3];
  byte local_f4;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 local_9c;
  longlong *local_98;
  undefined4 local_8c;
  longlong *local_88;
  undefined4 local_7c;
  longlong *local_78;
  undefined4 local_6c;
  undefined4 *local_68;
  undefined1 *local_60;
  undefined4 *local_58;
  undefined1 local_50 [16];
  longlong local_40;
  
  local_180 = "gml_Object_oBloodTendril_Step_0";
  local_178 = 0;
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  pcVar5 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_120,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_178 = 2;
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f6278);
  iVar2 = FUN_140e63cb0(local_50,&local_res8,&local_res10,uVar3);
  if (0 < iVar2) {
    do {
      local_178 = 4;
      local_9c = 6;
      local_a8 = local_res10;
      uVar7 = (ulonglong)in_stack_fffffffffffffe50 & 0xffffffffffffff00;
      uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
      FUN_140e87440(&local_a8,DAT_141a0f7f8,0x80000000,&local_b8,uVar6,uVar7);
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      local_198 = (undefined4)local_b8;
      uStack_194 = local_b8._4_4_;
      uStack_190 = uStack_b0;
      uStack_18c = uStack_ac;
      if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_130);
      }
      FUN_140041b80(&local_130,&local_198);
      FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_130);
      local_178 = 5;
      local_8c = 6;
      local_98 = local_res10;
      uVar7 = uVar7 & 0xffffffffffffff00;
      uVar6 = uVar6 & 0xffffffffffffff00;
      FUN_140e87440(&local_98,DAT_141a0f938,0x80000000,&local_c8,uVar6,uVar7);
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      local_198 = (undefined4)local_c8;
      uStack_194 = local_c8._4_4_;
      uStack_190 = uStack_c0;
      uStack_18c = uStack_bc;
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      FUN_140041b80(&local_140,&local_198);
      FUN_140e86fa0(local_res8,DAT_141a0f938,0x80000000,&local_140);
      local_178 = 7;
      local_7c = 6;
      local_88 = local_res10;
      uVar7 = uVar7 & 0xffffffffffffff00;
      uVar6 = uVar6 & 0xffffffffffffff00;
      FUN_140e87440(&local_88,DAT_141a0a778,0x80000000,&local_d8,uVar6,uVar7);
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      local_198 = (undefined4)local_d8;
      uStack_194 = local_d8._4_4_;
      uStack_190 = uStack_d0;
      uStack_18c = uStack_cc;
      if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_150);
      }
      FUN_140041b80(&local_150,&local_198);
      FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_150);
      local_178 = 8;
      if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_170);
      }
      local_164 = 0;
      local_170 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_170);
      local_178 = 9;
      local_6c = 6;
      local_78 = local_res10;
      FUN_140e87440(&local_78,DAT_141a0cfc8,0x80000000,&local_e8,uVar6 & 0xffffffffffffff00,
                    uVar7 & 0xffffffffffffff00);
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      local_198 = (undefined4)local_e8;
      uStack_194 = local_e8._4_4_;
      uStack_190 = uStack_e0;
      uStack_18c = uStack_dc;
      if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_160);
      }
      FUN_140041b80(&local_160,&local_198);
      FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_160);
      local_178 = 0xb;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      pcVar5 = (code *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a01b58);
      puVar4 = (undefined4 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a0a7d8);
      if (puVar4 != local_120) {
        local_198 = *puVar4;
        uStack_194 = puVar4[1];
        uStack_190 = puVar4[2];
        uStack_18c = puVar4[3];
        if ((1 << ((byte)_local_114 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_120);
        }
        FUN_140041b80(local_120,&local_198);
      }
      local_68 = local_120;
      in_stack_fffffffffffffe50 = &local_68;
      FUN_140e63610(local_res8,local_res10,&local_1a8,1,pcVar5,in_stack_fffffffffffffe50);
      cVar1 = FUN_140e643f0(local_50,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_50,&local_res8,&local_res10);
  local_178 = 0xe;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  local_198 = (undefined4)DAT_1419df7b0;
  uStack_194 = DAT_1419df7b0._4_4_;
  uStack_190 = DAT_1419df7b8;
  uStack_18c = DAT_1419df7bc;
  if ((1 << (local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_120);
  }
  FUN_140041b80(local_120,&local_198);
  local_68 = local_120;
  local_198 = (undefined4)DAT_1419df7b0;
  uStack_194 = DAT_1419df7b0._4_4_;
  uStack_190 = DAT_1419df7b8;
  uStack_18c = DAT_1419df7bc;
  if ((1 << (local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_110);
  }
  FUN_140041b80(local_110,&local_198);
  local_60 = local_110;
  uVar3 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_1a8,2,&local_68);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_178 = 0x10;
    puVar4 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f6278);
    if (puVar4 != local_100) {
      local_198 = *puVar4;
      uStack_194 = puVar4[1];
      uStack_190 = puVar4[2];
      uStack_18c = puVar4[3];
      if ((1 << (local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_100);
      }
      FUN_140041b80(local_100,&local_198);
    }
    local_58 = local_100;
    FUN_140edd0e0(local_res8,local_res10,1,&local_58);
    local_178 = 0x11;
    FUN_140edd0e0(local_res8,local_res10,0,0);
  }
  if (local_40 != 0) {
    FUN_140e4cd60();
    local_40 = 0;
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_120,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_188;
  return;
}

