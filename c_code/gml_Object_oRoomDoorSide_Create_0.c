// gml_Object_oRoomDoorSide_Create_0 @ 0x140d3aea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oRoomDoorSide_Create_0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 uVar9;
  ulonglong uVar8;
  undefined8 **ppuVar10;
  ulonglong uVar11;
  longlong *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined1 local_58 [16];
  longlong local_48;
  
  local_120 = "gml_Object_oRoomDoorBottom_Step_0";
  local_118 = 0;
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  uVar9 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_78,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_118 = 3;
  FUN_140e98b30(local_res8,local_res10);
  local_118 = 5;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fc9f8);
  if (puVar4 != &local_78) {
    local_158 = (longlong *)*puVar4;
    uStack_150 = puVar4[1];
    if ((1 << ((byte)_local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_158);
  }
  local_b8 = &local_78;
  uVar7 = CONCAT44(uVar9,DAT_141a1c640);
  puVar4 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_148,1,uVar7,&local_b8);
  if (puVar4 != &local_f0) {
    local_158 = (longlong *)*puVar4;
    uStack_150 = puVar4[1];
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    FUN_140041b80(&local_f0,&local_158);
  }
  local_118 = 6;
  uStack_150 = CONCAT44(0xd,(undefined4)uStack_150);
  local_158 = (longlong *)0x0;
  local_d8 = 0;
  uStack_d0 = uStack_150;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_d8);
  local_118 = 7;
  uStack_150._4_4_ = 0xf;
  local_158 = (longlong *)0x10000000000014b;
  iVar2 = FUN_140e63cb0(local_58,&local_res8,&local_res10,&local_158);
  if ((1 << ((byte)uStack_150._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (0 < iVar2) {
    do {
      local_118 = 7;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f7b68);
      uVar6 = (**(code **)(*local_res10 + 8))(local_res10,DAT_1419fc9f8);
      iVar2 = FUN_140e851f0(uVar5,uVar6,DAT_141955260,0);
      uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if (iVar2 == 0) {
        local_118 = 7;
        local_158 = (longlong *)0x3ff0000000000000;
        uStack_150._4_4_ = 0xd;
        local_d8 = 0x3ff0000000000000;
        uStack_d0 = CONCAT44(0xd,(undefined4)uStack_150);
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_d8);
        break;
      }
      cVar1 = FUN_140e643f0(local_58,&local_res8,&local_res10);
      uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_58,&local_res8,&local_res10);
  local_118 = 8;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  local_b8 = &local_f0;
  uVar5 = CONCAT44(uVar9,DAT_141a1c670);
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_148,1,uVar5,&local_b8);
  uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
  cVar1 = FUN_140e491e0(uVar7);
  if ((cVar1 != '\0') && (cVar1 = FUN_140e491e0(&local_138), cVar1 == '\0')) {
    local_118 = 9;
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    local_110 = 0;
    local_108 = 0;
    local_104 = 5;
    local_b0 = &local_f0;
    uVar5 = CONCAT44(uVar9,DAT_141a03a98);
    uVar7 = FUN_140e634e0(local_res8,local_res10,&local_110,1,uVar5,&local_b0);
    uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
    cVar1 = FUN_140e491e0(uVar7);
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    local_f4 = 0xd;
    if (cVar1 == '\0') {
      local_100 = 0x3ff0000000000000;
    }
    else {
      local_100 = 0;
    }
    FUN_140e86fa0(local_res8,DAT_1419f61d8,0x80000000,&local_100);
  }
  local_118 = 0xb;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  local_d8 = CONCAT44(uRam0000000141ddb29c,_DAT_141ddb298);
  uStack_d0 = CONCAT44(DAT_141ddb2a4,uRam0000000141ddb2a0);
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_d8);
  local_b8 = &local_78;
  ppuVar10 = &local_b8;
  uVar8 = CONCAT44(uVar9,DAT_141a1c640);
  puVar4 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_148,1,uVar8,ppuVar10);
  if (puVar4 != &local_c8) {
    local_d8 = *puVar4;
    uStack_d0 = puVar4[1];
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_d8);
  }
  FUN_140e86fa0(local_res8,DAT_141a1b910,0x80000000,&local_c8);
  local_118 = 0xc;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fc9e8);
  uStack_150._4_4_ = 6;
  local_158 = local_res8;
  uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_158,DAT_141a0a728,0x80000000,&local_88,uVar8,uVar11);
  if ((1 << ((byte)uStack_150._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  iVar2 = FUN_140e851f0(&local_88,uVar7,DAT_141955260,0);
  if (iVar2 == 0) {
    uStack_150._4_4_ = 6;
    local_158 = local_res8;
    FUN_140e87440(&local_158,DAT_141a0cfc8,0x80000000,&local_98,uVar8 & 0xffffffffffffff00,
                  uVar11 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_150._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    uStack_150._4_4_ = 0;
    local_158 = (longlong *)0x4008000000000000;
    uVar3 = FUN_140e851f0(&local_98,&local_158,DAT_141955260,1);
    if ((1 << ((byte)uStack_150._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if (uVar3 < 0x80000000) {
      local_118 = 0xe;
      uStack_150._4_4_ = 0xf;
      local_158 = (longlong *)0x10000010000010a;
      local_d8 = 0x10000010000010a;
      uStack_d0 = CONCAT44(0xf,(undefined4)uStack_150);
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_d8);
      FUN_140e86fa0(local_res8,DAT_1419f5c58,0x80000000,&local_a8);
    }
  }
  if (local_48 != 0) {
    FUN_140e4cd60();
    local_48 = 0;
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  _eh_vector_destructor_iterator_(&local_78,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return;
}

