// gml_Object_oMeatBlob_Draw_0 @ 0x140b57320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oMeatBlob_Draw_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined8 **in_stack_fffffffffffffe90;
  ulonglong uVar11;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  undefined4 local_13c;
  undefined8 local_138 [2];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 local_48 [16];
  longlong local_38;
  
  local_e0 = "gml_Object_oMeatBlob_Destroy_0";
  local_d8 = 0;
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  pcVar8 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_138,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_d8 = 2;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f42a8);
  if (puVar3 != local_138) {
    local_f8 = *puVar3;
    uStack_f0 = *(undefined4 *)(puVar3 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_f8);
  }
  local_68 = local_138;
  FUN_140edd0e0(local_res8,local_res10,1,&local_68);
  local_d8 = 3;
  local_13c = 0xf;
  local_148 = (longlong *)0x1000000000000cb;
  iVar2 = FUN_140e63cb0(local_48,&local_res8,&local_res10,&local_148);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (0 < iVar2) {
    do {
      local_d8 = 5;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f42c8);
      local_13c = 6;
      local_148 = local_res8;
      uVar11 = (ulonglong)in_stack_fffffffffffffe90 & 0xffffffffffffff00;
      uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
      FUN_140e87440(&local_148,DAT_1419fe0e8,0x80000000,&local_98,uVar9,uVar11);
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_7c = 6;
      local_88 = local_res8;
      uVar11 = uVar11 & 0xffffffffffffff00;
      uVar9 = uVar9 & 0xffffffffffffff00;
      FUN_140e87440(&local_88,DAT_1419fe158,0x80000000,&local_a8,uVar9,uVar11);
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      local_6c = 6;
      local_78 = local_res10;
      uVar11 = uVar11 & 0xffffffffffffff00;
      uVar9 = uVar9 & 0xffffffffffffff00;
      FUN_140e87440(&local_78,DAT_1419fe0e8,0x80000000,&local_b8,uVar9,uVar11);
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      uStack_ec = 6;
      local_f8 = local_res10;
      uVar9 = uVar9 & 0xffffffffffffff00;
      FUN_140e87440(&local_f8,DAT_1419fe158,0x80000000,&local_c8,uVar9,uVar11 & 0xffffffffffffff00);
      uVar10 = (undefined4)(uVar9 >> 0x20);
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_158 = (undefined4)local_98;
      uStack_154 = local_98._4_4_;
      uStack_150 = uStack_90;
      uStack_14c = uStack_8c;
      if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_158);
      local_68 = local_138;
      local_158 = (undefined4)local_a8;
      uStack_154 = local_a8._4_4_;
      uStack_150 = uStack_a0;
      uStack_14c = uStack_9c;
      if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_158);
      local_60 = local_128;
      local_158 = (undefined4)local_b8;
      uStack_154 = local_b8._4_4_;
      uStack_150 = uStack_b0;
      uStack_14c = uStack_ac;
      if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_158);
      local_58 = local_118;
      local_158 = (undefined4)local_c8;
      uStack_154 = local_c8._4_4_;
      uStack_150 = uStack_c0;
      uStack_14c = uStack_bc;
      if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_158);
      local_50 = local_108;
      in_stack_fffffffffffffe90 = &local_68;
      pcVar8 = (code *)CONCAT44(uVar10,DAT_1419fd548);
      uVar5 = FUN_140e634e0(local_res8,local_res10,&local_168,4,pcVar8,in_stack_fffffffffffffe90);
      iVar2 = FUN_140e851f0(uVar5,uVar4,DAT_141955260,1);
      if (iVar2 < 1) {
        local_d8 = 6;
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_168 = 0;
        local_160 = 0;
        local_15c = 5;
        puVar3 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f090);
        puVar6 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f090);
        if (puVar3 != local_138) {
          local_158 = *(undefined4 *)puVar3;
          uStack_154 = *(undefined4 *)((longlong)puVar3 + 4);
          uStack_150 = *(undefined4 *)(puVar3 + 1);
          uStack_14c = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_138);
          }
          FUN_140041b80(local_138,&local_158);
        }
        local_68 = local_138;
        local_158 = _DAT_1419ec2d0;
        uStack_154 = uRam00000001419ec2d4;
        uStack_150 = uRam00000001419ec2d8;
        uStack_14c = uRam00000001419ec2dc;
        if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_158);
        local_60 = local_128;
        FUN_140e609c0(local_res8);
        puVar7 = (undefined4 *)FUN_140e79230(&local_168,2,&local_68);
        if (puVar7 != puVar6) {
          local_158 = *puVar7;
          uStack_154 = puVar7[1];
          uStack_150 = puVar7[2];
          uStack_14c = puVar7[3];
          if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_158);
        }
        FUN_140e60910(1);
      }
      else {
        local_d8 = 5;
      }
      cVar1 = FUN_140e643f0(local_48,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_48,&local_res8,&local_res10);
  if (local_38 != 0) {
    FUN_140e4cd60();
    local_38 = 0;
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_138,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return;
}

