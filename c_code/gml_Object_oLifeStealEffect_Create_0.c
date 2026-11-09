// gml_Object_oLifeStealEffect_Create_0 @ 0x140b41fb0

void gml_Object_oLifeStealEffect_Create_0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong *local_res8;
  longlong *local_res10;
  code *pcVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 **in_stack_fffffffffffffec0;
  ulonglong uVar10;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  longlong *local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined4 local_c8 [4];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined4 local_9c;
  longlong *local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 *local_58;
  undefined1 *local_50;
  undefined1 local_48 [16];
  longlong local_38;
  
  local_130 = "gml_Object_oLifeSteal_Create_0";
  local_128 = 0;
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  pcVar7 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_c8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_128 = 2;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_128 = 3;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f440);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0xc010000000000000;
  local_128 = 5;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f3e28);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_128 = 6;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f3e18);
  FUN_140e609c0(local_res8);
  puVar4 = (undefined8 *)FUN_140e8da20(&local_78,local_res8,0);
  if (puVar4 != puVar3) {
    local_100 = (longlong *)*puVar4;
    uStack_f8 = *(undefined4 *)(puVar4 + 1);
    uStack_f4 = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_100);
  }
  FUN_140e60910(1);
  local_128 = 7;
  local_104 = 0xf;
  local_110 = 0x10000000000009d;
  iVar2 = FUN_140e63cb0(local_48,&local_res8,&local_res10,&local_110);
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if (0 < iVar2) {
    do {
      local_128 = 9;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56cd0);
      local_104 = 10;
      local_110 = 0;
      iVar2 = FUN_140e851f0(uVar5,&local_110,DAT_141955260,0);
      if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_110);
      }
      if (iVar2 != 0) {
        local_128 = 9;
        goto LAB_140b424a4;
      }
      local_128 = 10;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57c50);
      local_9c = 10;
      local_a8 = 2;
      iVar2 = FUN_140e851f0(uVar5,&local_a8,DAT_141955260,0);
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      if (iVar2 == 0) {
        local_128 = 10;
        goto LAB_140b424a4;
      }
      local_128 = 0xb;
      local_8c = 6;
      local_98 = local_res8;
      uVar10 = (ulonglong)in_stack_fffffffffffffec0 & 0xffffffffffffff00;
      uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
      FUN_140e87440(&local_98,DAT_141a1f580,0x80000000,&local_d8,uVar8,uVar10);
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      local_7c = 0xf;
      local_88 = 0x100000000000056;
      iVar2 = FUN_140e851f0(&local_d8,&local_88,DAT_141955260,0);
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if (iVar2 == 0) {
        local_128 = 0xb;
        goto LAB_140b424a4;
      }
      local_128 = 0xd;
      if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_120);
      }
      local_120 = 0;
      local_118 = 0;
      local_114 = 5;
      puVar6 = (undefined4 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_1419f3e18);
      uStack_f4 = 6;
      local_100 = local_res8;
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(&local_100,DAT_141a0a828,0x80000000,&local_e8,uVar8,uVar10 & 0xffffffffffffff00)
      ;
      uVar9 = (undefined4)(uVar8 >> 0x20);
      if ((1 << ((byte)uStack_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_100);
      }
      if (puVar6 != local_c8) {
        local_68 = *puVar6;
        uStack_64 = puVar6[1];
        uStack_60 = puVar6[2];
        uStack_5c = puVar6[3];
        if ((1 << ((byte)local_c8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_68);
      }
      local_58 = local_c8;
      local_68 = (undefined4)local_e8;
      uStack_64 = local_e8._4_4_;
      uStack_60 = uStack_e0;
      uStack_5c = uStack_dc;
      if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_68);
      local_50 = local_b8;
      in_stack_fffffffffffffec0 = &local_58;
      pcVar7 = (code *)CONCAT44(uVar9,DAT_1419fe568);
      FUN_140e634e0(local_res8,local_res10,&local_120,2,pcVar7,in_stack_fffffffffffffec0);
      cVar1 = FUN_140e643f0(local_48,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_48,&local_res8,&local_res10);
LAB_140b424a4:
  if (local_38 != 0) {
    FUN_140e4cd60();
    local_38 = 0;
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return;
}

