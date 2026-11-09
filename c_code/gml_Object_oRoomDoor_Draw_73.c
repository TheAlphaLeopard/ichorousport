// gml_Object_oRoomDoor_Draw_73 @ 0x140d394f0

longlong *
gml_Object_oRoomDoor_Draw_73
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined1 **in_stack_fffffffffffffe40;
  ulonglong uVar12;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_174;
  longlong *local_170;
  undefined4 local_164;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
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
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  longlong *local_f8;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 local_dc;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  uint local_a8 [2];
  undefined8 *local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 local_70 [16];
  longlong local_60;
  
  local_1a0 = "gml_Script_anon@270@gml_Object_oRoomDoor_Create_0";
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  local_198 = 0xe;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_a8,param_4,1,param_5);
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_d8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_184 = 0xffffff;
  local_190 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  local_10c = 0xffffff;
  local_118 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_1ac = 0;
  uVar8 = 0;
  local_1b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_198 = 0xe;
  puVar6 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_a8[0];
  if ((int)local_a8[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_a0;
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_198 = 0xe;
    if (0 < (int)local_a8[0]) {
      puVar6 = (undefined8 *)*local_a0;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0x4060000000000000;
  }
  local_198 = 0x10;
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  local_184 = 0;
  local_190 = 0xc010000000000000;
  local_198 = 0x12;
  local_174 = 0xf;
  local_180 = 0x1000000000000d6;
  iVar2 = FUN_140e63cb0(local_70,&local_res8,&local_res10,&local_180);
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if (0 < iVar2) {
    do {
      local_198 = 0x14;
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 == '\0') {
        local_198 = 0x14;
        break;
      }
      local_198 = 0x15;
      uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57c10);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 == '\0') {
        local_198 = 0x15;
      }
      else {
        local_198 = 0x16;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_1b8 = 0;
        local_1b0 = 0;
        local_1ac = 5;
        local_174 = 0xf;
        local_180 = 0x1000000000000ee;
        FUN_140e87440(&local_180,DAT_1419ff968,0x80000000,&local_118,
                      (ulonglong)pcVar9 & 0xffffffffffffff00,
                      (ulonglong)in_stack_fffffffffffffe40 & 0xffffffffffffff00);
        if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_180);
        }
        local_fc = 0xf;
        local_108 = 0x1000000000000ee;
        uVar4 = FUN_140069500(&local_108);
        in_stack_fffffffffffffe40 = (undefined1 **)0x0;
        pcVar9 = (code *)&local_118;
        uVar4 = FUN_140e63610(uVar4,local_res10,&local_1b8,0,pcVar9,0);
        cVar1 = FUN_140e491e0(uVar4);
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        if (cVar1 == '\0') {
          local_198 = 0x16;
        }
        else {
          local_198 = 0x18;
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          local_1b8 = 0;
          local_1b0 = 0;
          local_1ac = 5;
          local_ec = 6;
          local_f8 = local_res8;
          uVar12 = (ulonglong)in_stack_fffffffffffffe40 & 0xffffffffffffff00;
          uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
          FUN_140e87440(&local_f8,DAT_1419fe0e8,0x80000000,&local_128,uVar10,uVar12);
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          local_dc = 6;
          local_e8 = local_res8;
          uVar10 = uVar10 & 0xffffffffffffff00;
          FUN_140e87440(&local_e8,DAT_1419fe158,0x80000000,&local_138,uVar10,
                        uVar12 & 0xffffffffffffff00);
          uVar11 = (undefined4)(uVar10 >> 0x20);
          if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          local_148 = (undefined4)local_128;
          uStack_144 = local_128._4_4_;
          uStack_140 = uStack_120;
          uStack_13c = uStack_11c;
          if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_d8);
          }
          FUN_140041b80(local_d8,&local_148);
          local_88 = local_d8;
          local_148 = (undefined4)local_138;
          uStack_144 = local_138._4_4_;
          uStack_140 = uStack_130;
          uStack_13c = uStack_12c;
          if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_c8);
          }
          FUN_140041b80(local_c8,&local_148);
          local_80 = local_c8;
          uStack_8c = 0xf;
          local_98 = 0x1000000000000ee;
          local_148 = 0xee;
          uStack_144 = 0x1000000;
          uStack_140 = uStack_90;
          uStack_13c = 0xf;
          if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_b8);
          }
          FUN_140041b80(local_b8,&local_148);
          local_78 = local_b8;
          in_stack_fffffffffffffe40 = &local_88;
          pcVar9 = (code *)CONCAT44(uVar11,DAT_141a12628);
          uVar4 = FUN_140e634e0(local_res8,local_res10,&local_1b8,3,pcVar9,in_stack_fffffffffffffe40
                               );
          cVar1 = FUN_140e491e0(uVar4);
          if (cVar1 == '\0') {
            local_198 = 0x18;
          }
          else {
            local_198 = 0x1a;
            local_164 = 6;
            local_170 = local_res8;
            in_stack_fffffffffffffe40 =
                 (undefined1 **)((ulonglong)in_stack_fffffffffffffe40 & 0xffffffffffffff00);
            pcVar9 = (code *)((ulonglong)pcVar9 & 0xffffffffffffff00);
            FUN_140e87440(&local_170,DAT_141a0a828,0x80000000,&local_158,pcVar9,
                          in_stack_fffffffffffffe40);
            if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_170);
            }
            local_148 = (undefined4)local_158;
            uStack_144 = local_158._4_4_;
            uStack_140 = uStack_150;
            uStack_13c = uStack_14c;
            if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_190);
            }
            FUN_140041b80(&local_190,&local_148);
          }
        }
      }
      cVar1 = FUN_140e643f0(local_70,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_70,&local_res8,&local_res10);
  local_198 = 0x1e;
  local_164 = 6;
  local_170 = local_res8;
  FUN_140e87440(&local_170,DAT_141a0a828,0x80000000,&local_158,
                (ulonglong)pcVar9 & 0xffffffffffffff00,
                (ulonglong)in_stack_fffffffffffffe40 & 0xffffffffffffff00);
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  iVar2 = FUN_140e851f0(&local_190,&local_158,DAT_141955260,0);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (iVar2 == 0) {
    uVar8 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar8 << 0x20;
  if (local_60 != 0) {
    FUN_140e4cd60();
    local_60 = 0;
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,3,FUN_140041b30);
  if (0 < (int)local_a8[0]) {
    puVar6 = local_a0;
    do {
      puVar5 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_a0);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return param_3;
}

