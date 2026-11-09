// gml_Object_oOfferingPickup_Alarm_0 @ 0x140b907a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oOfferingPickup_Alarm_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 **ppuVar9;
  ulonglong uVar10;
  ulonglong in_stack_fffffffffffffe60;
  ulonglong uVar11;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined8 local_140;
  byte local_134;
  undefined1 local_130 [12];
  byte local_124;
  undefined1 local_120 [12];
  byte local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined1 *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_150 = "gml_Script_anon@1122@gml_Object_oOfferingPickup_Create_0";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0x39;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_140,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_f4 = 0xffffff;
  local_100 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a572b0);
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57320);
  uStack_7c = 0xffffff;
  local_88 = (undefined1 *)0x0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_148 = 0x3b;
  puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f48c8);
  if (puVar6 != &local_140) {
    local_178 = (undefined1 *)*puVar6;
    uStack_170 = *(undefined4 *)(puVar6 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    FUN_140041b80(&local_140,&local_178);
  }
  local_d8 = &local_140;
  ppuVar9 = &local_d8;
  gml_Script_anon_6618_DefineBuffs_OFFERINGSINIT(local_res8,local_res10,&local_188,1,ppuVar9);
  local_148 = 0x3d;
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  local_f4 = 0;
  local_100 = 0;
  local_18c = 0xf;
  local_198 = 0x100000000000106;
  FUN_140e87930(&local_198,DAT_141a57b90,0x80000000,&local_100);
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_148 = 0x3e;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  local_18c = 0xf;
  local_198 = 0x100000000000106;
  FUN_140e87440(&local_198,DAT_141a57ba0,0x80000000,&local_78,
                (ulonglong)ppuVar9 & 0xffffffffffffff00,
                in_stack_fffffffffffffe60 & 0xffffffffffffff00);
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_18c = 0xf;
  local_198 = 0x100000000000106;
  uVar7 = FUN_140069500(&local_198);
  uVar11 = 0;
  puVar6 = &local_78;
  FUN_140e63610(uVar7,local_res10,&local_188,0,puVar6,0);
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_148 = 0x40;
  puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f50f8);
  uStack_16c = 0xd;
  local_178 = (undefined1 *)0x3ff0000000000000;
  if (&local_178 != puVar8) {
    local_e8 = (longlong *)0x3ff0000000000000;
    uStack_e0 = uStack_170;
    uStack_dc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_e8);
  }
  local_148 = 0x41;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  local_18c = 0xf;
  local_198 = 0x1000000000000ee;
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar10 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(&local_198,DAT_1419f5868,0x80000000,&local_168,uVar10,uVar11);
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140e87440(&local_168,DAT_141a55540,0x80000000,&local_c0,uVar10 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  local_178 = (undefined1 *)CONCAT44(uRam0000000141dda02c,_DAT_141dda028);
  uStack_170 = uRam0000000141dda030;
  uStack_16c = DAT_141dda034;
  if ((1 << (local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  FUN_140041b80(&local_140,&local_178);
  local_d8 = &local_140;
  switch(local_15c) {
  default:
switchD_140b90bf6_caseD_1:
    uVar7 = 0;
    break;
  case 6:
    uVar7 = local_168;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_168 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_140b90bf6_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_168);
    uVar7 = FUN_140e87250(uVar2);
  }
  puVar6 = &local_c0;
  FUN_140e63610(uVar7,local_res10,&local_188,1,puVar6,&local_d8);
  uVar2 = (undefined4)((ulonglong)puVar6 >> 0x20);
  local_148 = 0x42;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uStack_16c = 0xf;
  local_178 = (undefined1 *)0x10000020000010a;
  local_e8 = (longlong *)0x10000020000010a;
  uStack_e0 = uStack_170;
  uStack_dc = 0xf;
  if ((1 << (local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  FUN_140041b80(&local_140,&local_e8);
  local_d8 = &local_140;
  local_178 = (undefined1 *)CONCAT44(uRam00000001419ec624,_DAT_1419ec620);
  uStack_170 = uRam00000001419ec628;
  uStack_16c = uRam00000001419ec62c;
  if ((1 << (local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_130);
  }
  FUN_140041b80(local_130,&local_178);
  local_d0 = local_130;
  local_178 = (undefined1 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_170 = uRam00000001419df7a8;
  uStack_16c = uRam00000001419df7ac;
  if ((1 << (local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_120);
  }
  FUN_140041b80(local_120,&local_178);
  local_c8 = local_120;
  ppuVar9 = &local_d8;
  uVar11 = CONCAT44(uVar2,DAT_141a0a2e8);
  FUN_140e634e0(local_res8,local_res10,&local_188,3,uVar11,ppuVar9);
  local_148 = 0x44;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419f5b98,0x80000000,&local_88,uVar11,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar11 >> 0x20);
  if (puVar4 != &local_140) {
    local_178 = (undefined1 *)*puVar4;
    uStack_170 = *(undefined4 *)(puVar4 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    FUN_140041b80(&local_140,&local_178);
  }
  local_d8 = &local_140;
  local_178 = local_88;
  uStack_170 = uStack_80;
  uStack_16c = uStack_7c;
  if ((1 << (local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_130);
  }
  FUN_140041b80(local_130,&local_178);
  local_d0 = local_130;
  ppuVar9 = &local_d8;
  uVar11 = CONCAT44(uVar2,DAT_141a573f0);
  puVar4 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_188,2,uVar11,ppuVar9);
  if (puVar4 != &local_110) {
    local_178 = (undefined1 *)*puVar4;
    uStack_170 = *(undefined4 *)(puVar4 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    FUN_140041b80(&local_110,&local_178);
  }
  local_148 = 0x46;
  local_18c = 0xf;
  local_198 = 0x1000000000000d1;
  iVar3 = FUN_140e63cb0(local_68,&local_res8,&local_res10,&local_198);
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if (0 < iVar3) {
    do {
      local_148 = 0x48;
      local_18c = 6;
      local_198 = local_res10;
      uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(&local_198,DAT_141a0a828,0x80000000,&local_a0,uVar11,uVar10);
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      uStack_dc = 6;
      local_e8 = local_res8;
      ppuVar9 = (undefined8 **)(uVar10 & 0xffffffffffffff00);
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(&local_e8,DAT_141a0a828,0x80000000,&local_b0,uVar11,ppuVar9);
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      iVar3 = FUN_140e851f0(&local_a0,&local_b0,DAT_141955260,0);
      if (iVar3 != 0) {
        local_148 = 0x4a;
        uStack_16c = 0;
        local_178 = &DAT_bff0000000000000;
        iVar3 = FUN_140e851f0(&local_110,&local_178,DAT_141955260,0);
        if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        if (iVar3 == 0) {
          local_148 = 0x4b;
          FUN_140edd0e0(local_res8,local_res10,0,0);
        }
      }
      cVar1 = FUN_140e643f0(local_68,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_68,&local_res8,&local_res10);
  DAT_141a67c38 = 1;
  FUN_140e87440(&local_168,DAT_141a55540,0x80000000,&local_c0,uVar11 & 0xffffffffffffff00,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  DAT_141a67c38 = 0;
  DAT_141a72aac = 0;
  if (local_58 != 0) {
    FUN_140e4cd60();
    local_58 = 0;
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  _eh_vector_destructor_iterator_(&local_140,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

